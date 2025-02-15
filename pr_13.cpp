//13.Program to illustrate friend function.

#include<iostream>
using namespace std;

class Sample
{
    int x,y;
    public:
    Sample(int a,int b);
    friend int sum(Sample S);
};

Sample::Sample(int a,int b)
{
    x=a;
    y=b;
}

int sum(Sample S)
{
    int sum;
    sum=S.x+S.y;
    return sum;
}

int main()
{

    Sample obj(2,3);
    cout<<"The sum of x and y = "<<sum(obj);
    return 0;

}
