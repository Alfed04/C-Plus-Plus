//Program that uses  try catch statement to handle exception.

#include<iostream>;
using namespace std;
int main ()
{
    int a,b;
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;
    int x=a-b;
    try{
        if(x!=0){
            cout<<"Result is "<<a/b;
        }
        else{
            throw x;
        }
    }
    catch(int x){
        cout<<"Exception Caught\n";
    }
    return 0;
}

