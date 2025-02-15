//Program  that uses the Function Template to swap out two numbers.


#include<iostream>;
using namespace std;

template<class T>
T swap(T *x,T *y){
    T *z;
    *z=*x;
    *x=*y;
    *y=*z;
    
}

int main ()
{
    int a,b;
    cout<<"Enter the value of a and b in integers";
    cin>>a>>b;
    swap(a,b);
    cout<<"The swapped values are : "<<a<<" "<<b<<endl;

    float x,y;
    cout<<"Enter the value of x and y as floating values";
    cin>>x>>y;
    swap(x,y);
    cout<<"The swapped values are : "<<x<<" "<<y<<endl;
    return  0;

}
