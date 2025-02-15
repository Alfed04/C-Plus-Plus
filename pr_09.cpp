#include<iostream>
using namespace std;

class student{
    int roll_no;
	int marks;
    public:
    student();//Default Constructor
    student(int m,int n){
        roll_no=m;
		marks=n;
    }//Parameterised Constructor
    student(student &x){
        roll_no=x.roll_no;
		marks=x.marks;
    }//Copy Constructor
    void display(){
       cout<<"roll_no = "<<roll_no<<"  marks = "<<marks<<endl;
    }
};

int main ()
{
    student s1();//Calling Default Constructor
	student  s2(20,98);//Calling Parameterised Constructor
	cout<<"Parameterised Constructor Output : ";
	s2.display();
	student s3(s2);//Calling Copy Constructor
	cout<<"Copy Constructor Output : ";
	s3.display();
	student s4=s2;//Another way to Call Copy Constructor
	cout<<"Copy Constructor Output : ";
	s4.display();
    return 0;
}
