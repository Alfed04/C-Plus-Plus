#include<iostream>
using namespace std;
int main (){

    float n1 , n2;
    cout<<"Enter 2 numbers ";
    cin>>n1>>n2;

    char op;
    cout<<"Enter operator ";
    cin>>op;

    switch(op){
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        default:
            cout<<"Please Enter a Valid Operator";
            break;
    }

    return 0;
}