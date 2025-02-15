#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int sum=0;
    int x=1;
    while(n>0){
        int y=n%10;
        sum+=x*y;
        x*=2;
        n/=10;
    }
    return sum;
}
int main (){
    int n;
    cout<<"Enter the value of n in Binary Format ";
    cin>>n;

    cout<<binaryToDecimal(n);

    return 0;
}