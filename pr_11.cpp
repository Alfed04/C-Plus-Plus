#include<iostream>
using namespace std;
class overloading{
    int x;
    public:
    overloading():x(5){}
    int operator --(){
        x=x-3;
    }
    int operator ++(){//prefix
        x=x+3;
    }
    int operator ++(int){//postfix
        x=x+4;
    }
    void display(){
        cout<<x<<endl;
    }
};
int main ()
{
    overloading o1;
    --o1;
    o1.display();
    o1++;
    o1.display();
    ++o1;
    o1.display();
    return 0;
}
