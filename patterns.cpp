#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
// * * * * * 
// * * * * *
// * * * * *
// * * * * *
// * * * * *

void print2(int n ){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
// * 
// * *
// * * *
// * * * *
// * * * * *
 
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
// * * * * * 
// * * * *
// * * *
// * *
// *

void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

void print7(int n){
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++){
            cout<<" ";
        }
        for(int stars=1;stars<=2*i-1;stars++)
        {
            cout<<"*";
        }
        for(int space=1;space<=n-i;space++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
//     *    
//    ***
//   *****
//  *******
// *********

void print8(int n){
    for(int i=1;i<=n;i++){
        for(int space=1;space<=i-1;space++){
            cout<<" ";
        }
        for(int stars=1;stars<=2*n-2*i+1;stars++)
        {
            cout<<"*";
        }
        for(int space=1;space<=i-1;space++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
// *********
//  *******
//   *****
//    ***
//     *


int main(){
    print8(5);
    return 0;
}