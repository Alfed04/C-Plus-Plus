#include<iostream>
using namespace std;
int main ()
{
    char alphabet;
    cout<<"Enter a Alphabet ";
    cin>>alphabet;

    switch(alphabet){
        case 'a':
        cout<<"It is a Vowel"<<endl;
        break;
        case 'e':
        cout<<"It is a Vowel"<<endl;
        break;
        case 'i':
        cout<<"It is a Vowel"<<endl;
        break;
        case 'o':
        cout<<"It is a Vowel"<<endl;
        break;
        case 'u':
        cout<<"It is a Vowel"<<endl;
        break;
        default:
        cout<<"It is a Consonant"<<endl;
        break;
    }
    return 0;
}
