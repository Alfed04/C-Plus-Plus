//Program to illustrate Function Overloading.

#include<iostream>
using namespace std;

class math{

    public:
    int volume(int,int,int);
    double volume(double,double,double);
};

int math::volume(int a,int b,int c){
    return a*b*c;
}

double math::volume(double x,double y,double z){
    return x*y*z;
}

int main ()
{
    math m1;

    int v1;
    double v2; 
    v1=m1.volume(2,2,2);
    cout<<"The value of v1 = "<<v1<<endl;
    v2=m1.volume(8.0,7.0,9.0);
    cout<<"The value of v2 = "<<v2;
    return 0;
}
