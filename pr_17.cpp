//Program showing the Class  to  Class type conversion 
#include<iostream>;
using namespace std;
class Item{
    private:
    int a,b;
    public:
    void showData(){
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    void setA(int x){
        a=x;
    }
    void setB(int y){ b=y; }
};
class Product{
    private:
    int m,n;
    public:
    void setData(int x,int y){
        m=x;
        n=y; }
    operator Item(){
        Item temp;
        temp.setA(m);
        temp.setB(n);
        return temp;
    }};
int main (){
    Item i;
    Product p;
    p.setData(3,4);
    i=p;
    i.showData();
    return 0;
}
