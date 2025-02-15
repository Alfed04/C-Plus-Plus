//Program illustrating the Rethrowing Mechanism of Exception Handling.

#include<iostream>;
using namespace std;


void MyHandler(){
    try{
        throw "hello";
    }
    catch(const char *){
        cout<<"Caught by MyHandler\n";
        throw;
    }
}

int main ()
{
    cout<<"main starts\n";
    try{
        MyHandler();
    }
    catch(const char *){
        cout<<"Caught by main \n";
    }
    return 0;
}
