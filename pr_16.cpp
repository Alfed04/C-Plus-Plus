//Program showing the Class  type conversion to Basic/Primitive  type

#include<iostream>;
using namespace std;

class Complex{
    private:
    int a,b;
    public:
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    operator int(){
        return a;
    }
};

int main ()
{
    Complex c1;
    c1.setData(3,4);
    c1.showData();
    int x;
    x=c1;  
    cout<<x;
    return 0;
}

