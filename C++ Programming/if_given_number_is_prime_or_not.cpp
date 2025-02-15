#include<iostream>
using namespace std;
int main (){

    int num;
    int div=2;
    cout<<"Enter a Number ";
    cin>>num;
    while (div<num)
    {
       if (num%div==0)
       {
           cout<<"Not Prime Number"<<endl;
           break;
       }
       else{
           div=div+1;
       }
    }

    if (div==num){
        cout<<"Prime Number";
    }
    
    return 0;
}