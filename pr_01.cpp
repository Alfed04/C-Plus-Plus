#include<iostream>
using namespace std;

class Person{
    char name[30];
    int age;
    int roll_no;

    public:
        void get_data(){
            cout<<"Enter your Name , Age and Roll No. ";
            cin>>name>>age>>roll_no;
        }

        void display(void){
            cout<<"Here is Your Entered Data \n"<<name<<" "<<age<<" "<<roll_no;
        }
};

int main ()
{
    Person Alfed;
    Alfed.get_data();
    Alfed.display();
    return 0;
}
