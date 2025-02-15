#include<iostream>
using namespace std;

class Shape{
    protected:
    float dimension;
    public:
    void getDimension(){
        cin>>dimension;
    }
    virtual float calculateArea()=0; //pure virtual function
};
class Square:public Shape{
    public:
    float calculateArea(){
        return dimension*dimension;
    }
};
class Circle:public Shape{
    public:
    float calculateArea(){
        return 3.14*dimension*dimension;
    }
};
int main ()
{
    Square square;
    cout<<"Enter the side of the Square ";
    square.getDimension();
    cout<<"Area of Square : "<<square.calculateArea()<<endl;
    Circle circle;
    cout<<"Enter the radius of the Circle ";
    circle.getDimension();
    cout<<"Area of Circle : "<<circle.calculateArea()<<endl;
    return 0;
}
