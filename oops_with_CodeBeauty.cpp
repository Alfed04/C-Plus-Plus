#include<iostream>
using std::string;
class AbstractClass{
    virtual void AskForPromotion()=0;//pure virtual function
};
class Employee:AbstractClass{
protected:
    std::string Name;
    std::string Company;
    int Age;
public:
    void setName(string name){
        Name=name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company=company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age=age;
    }
    int getAge(){
        return Age;
    }
    
    Employee(string name,string company,int age){
        Name=name;
        Company=company;
        Age=age;
    }

    void GetEmployeeInfo(){
    std::cout<<"Name "<<Name<<std::endl;
    std::cout<<"Company "<<Company<<std::endl;
    std::cout<<"Age "<<Age<<std::endl;
    }
    void AskForPromotion(){
        if(Age>30)
        std::cout<<Name<<" , you are promoted"<<std::endl;
        else
        std::cout<<Name<<" Sorry , you are not promoted"<<std::endl;
    }
};
class Developer:public Employee{
    public:
    string FavLanguage;
    Developer(string name,string company,int age,string favLanguage):Employee(name,company,age){
        FavLanguage=favLanguage;
    }
    void DevInfo(){
        std::cout<<"Name "<<Name<<std::endl;
    std::cout<<"Company "<<Company<<std::endl;
    std::cout<<"Age "<<Age<<std::endl;
    std::cout<<"FavLanguage "<<FavLanguage<<std::endl;
    }


};

int main(){
    Employee employee1=Employee("ALFED","GOOGLE",24);
    Employee employee2=Employee("Priva","Amazon",35);
    
    // employee1.AskForPromotion();
    // employee2.AskForPromotion();
    Developer d=Developer("Alfed Khan ","Flipkart",35,"C++");
    d.DevInfo();
d.setAge(40);
d.DevInfo();
    return 0;
}