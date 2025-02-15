//Program that uses multiple catch statements to handle different types of exceptions.

#include<iostream>;
using namespace std;
void test(int x){
    try{
        if(x==1)
        throw x;
        if (x==0)
        throw 'x';
        if (x==-1)
        throw 1.0;
    }
    catch(char c){
        cout<<"Caught a character\n";
    }
    catch(int m){
        cout<<"Caught a int\n";
    }
    catch(double d){
        cout<<"Caught a double\n";
    }
}
int main()
{
    test(1);
    test(0);
    test(-1);
    test(2);
    return 0;
}
