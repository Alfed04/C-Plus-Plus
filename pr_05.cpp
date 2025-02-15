#include<iostream>
using namespace std;

class Base
{
    public :
    void display()
    {
        cout<<"I am in Base Class";
    }
};

class Derived :public Base
{
    public :
    void display()
   {
        cout<<"I am in Derived Class";
    }
};


int main ()
{
    Derived d;
    Base b=d;
    b.display(); 
    return 0;
}
