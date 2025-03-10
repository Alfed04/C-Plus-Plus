#include<bits/stdc++.h>
using namespace std;


string decimalToHexadecimal( int n){
    string ans="";
    int x=1;
    while(x<=n)
        x*=16;
    x/=16;
    while(x>0)
    {
        int lastDigit=n/x;
        n-=lastDigit*x;
        x/=16;
        if(lastDigit<=9)
        {
            ans=ans+to_string(lastDigit);
        }
        else{
            char c='A'+lastDigit-10;
            ans.push_back(c);
        }
    }
    return ans;
}


int main (){
    int n;
    cout<<"Enter the value of n in Decimal to be converted into Hexadecimal ";
    cin>>n;

    cout<<decimalToHexadecimal(n);
    
    return 0;
}
