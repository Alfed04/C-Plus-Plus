#include<iostream>
using namespace std;

bool isPythogoreanTriplet(int x,int y,int z)
{
    int a;
    int b;
    int c;
    a=max(x,max(y,z));
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a==(b*b+c*c)){
        return true; 
    }
    else{
        return false;
    }
}

int main ()
{
    int x,y,z;
    cout<<"Enter the value of x , y and z ";
    cin>>x>>y>>z;
    if(isPythogoreanTriplet(x,y,z)){
        cout<<"Pythogorean Triplet";
    }
    else{
        cout<<"Not Pythogorean Triplet";
    }
    return 0;
}