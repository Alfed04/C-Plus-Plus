#include<iostream>
using namespace std;

int octalToDecimal(int n)
{
    int sum=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        sum += x*y;
        x *= 8;
        n /= 10;
    }
    return sum;
}

int main ()
{
    int n;
    cout<<"Enter the value of n in Octal Format ";
    cin>>n;

    cout<<octalToDecimal(n);
    return 0;
}