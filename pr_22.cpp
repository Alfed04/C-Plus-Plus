//Program showing the implementation  of Class Template .

#include<iostream>;
using namespace std;

template <typename T,typename U>
class Weight{
    private:
    T kg;
    U grams;
    public:
    void setData(T x,U y){
        kg=x;
        grams=y; }
    T getkgData(){
        return kg;
    }
    U getgramsData(){
        return grams;
    }};
int main (){
    Weight <int,int> obj1;
    obj1.setData(5,700);
    cout<<"Value of kg = "<<obj1.getkgData()<<endl;
    cout<<"Value of grams = "<<obj1.getgramsData()<<endl;
    Weight <int,double> obj2;
    obj2.setData(4,0.500);
    cout<<"Value of kg = "<<obj2.getkgData()<<endl;
    cout<<"Value of grams = "<<obj2.getgramsData()<<endl;
    Weight <double,double> obj3;
    obj3.setData(2.5,70.5);
    cout<<"Value of kg = "<<obj3.getkgData()<<endl;
    cout<<"Value of grams = "<<obj3.getgramsData()<<endl;
    return 0;
}
