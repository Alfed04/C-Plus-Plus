#include<iostream>
using namespace std;

int sum(int n)
{
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}

int main ()
{
    int n;
    cout<<"Enter the number upto which you want to find 1 to n sum ";
    cin>>n;

    cout<<sum(n);//The sum can also be calculated using formula n*(n+1)/2;

    return 0;
}
