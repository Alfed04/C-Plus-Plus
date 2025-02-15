#include<iostream>
using namespace std;
class Complex{
    float real;
    float imag;
    public:
    Complex():real(0),imag(0){};
    void input(){
        cout<<"Enter real and imag part respectively";
        cin>>real;
        cin>>imag;
    }
    void display(){
        cout<<"OutputComplex number = "<<real<<" + i"<<imag<<endl;
    }
    Complex operator +(const Complex &obj){
        Complex temp;
        temp.real=real+obj.imag;
        temp.imag=imag+obj.imag;
        return temp;
    }
};
int main ()
{
    Complex c1,c2,c3;
    c1.input();
    c2.input();
    c1.display();
    c2.display();
    c3=c1+c2;
    c3.display();
    return 0;
}

