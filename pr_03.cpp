#include<iostream>
using namespace std;

class Test
{
    const int i;
    public:
      Test(int x):i(x){
          cout<<"i value set: "<<i<<endl;
          //   i++;  This statement will produce an error as const variable will be initialised using a constructor and once initialised it's value cannot be changed
      }
};

int main ()
{
    
    Test  t(10);
    Test  s(50);

    return 0;

}
