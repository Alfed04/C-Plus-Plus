#include <iostream>
using namespace std;
class person
{
    public:
    char name[100];
    int code;
    void input()
    {
        cout<<"Enter the name of person : ";
        cin>>name;
        cout<<"Enter the code of the person : ";
        cin>>code;
    }
    void display()
    {
        cout<<"Name of the person : "<<name<<endl;
        cout<<"Code of the perosn: "<<code<<endl;
    }};
class account:virtual public person
{
    public:
    float pay;
    void getpay()
    {
        cout<<"Enter the pay:";
        cin>>pay;
    }
    void display()
    {
        cout<<"Pay : "<<pay<<endl;
    }
};
class admin:virtual public person
{
    public:
    int experience;
    void getexp()
    {
    cout<<"Enter the  experience : ";
    cin>>experience;
}
void display()
{
    cout<<"Experience : "<<experience<<endl;
    }
};
class master:public account, public admin
{
    public:
    char n[100];
    void gettotal()
    {
        cout<<"Enter the company name : ";
        cin>>n;
    }
    void display()
    {
        cout<<"Company name : "<<n<<endl;
    }
};

int main()
{
   master m1;
   m1.input();
   m1.getpay();
   m1.getexp();
   m1.gettotal();
   m1.person::display();
   m1.account::display();
   m1.admin::display();
   m1.display();
    return 0;
}
