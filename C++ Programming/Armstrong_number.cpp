#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    
    int sum=0;
    int originaln=n;
    while (n>0)
    {
        int lastDigit=n%10;
        sum=sum+pow(lastDigit,3);
        n=n/10;
    }
    if(sum==originaln){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong";
    }
    
    return 0;
}