#include<iostream>
using namespace std;
class Test{
    int code;
    static int count;
    public:
    void setCode(){
        code=++count;
    }
    void showCode(){
        cout<<"Object no.: "<<code; }
    static void showcount(){
        cout<<" count : "<<count<<endl;
    }
};
int Test::count=0;
int main ()
{
    Test t1,t2,t3,t4;
    t1.setCode();
    t1.showCode();
    Test::showcount();
    t2.setCode();
    t2.showCode();
    Test::showcount();
    t3.setCode();
    t3.showCode();
    Test::showcount();
    t4.setCode();
    t4.showCode();
    Test::showcount();
    return 0;
}
