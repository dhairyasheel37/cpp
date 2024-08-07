#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age :";
    cin>>age;

    switch(age)
    {
    case 12:
        cout<<"You are 12 year old";
        break;
    case 18:
        cout<<"you are 18 year old";
        break;
    default:
        cout<<"You are neither 12 nor 18 years old";


    }
}
