#include<bits/stdc++.h>
using namespace std;

int hexadecimalToDecimal(string n){
    int sum=0;
    int x=1;

    int s=n.size();

    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='0'&&n[i]<='9'){
            sum += x*(n[i]-'0');
        }
        else if (n[i]>='A' && n[i]<='F'){
            sum += x*(n[i]-'A'+10);
        }
        x *= 16;
    }
    return sum;
}

int main ()
{
    string n;
    cout<<"Enter the value of n in Hexadecimal Format ";
    cin>>n;

    cout<<hexadecimalToDecimal(n);

    return 0;
}