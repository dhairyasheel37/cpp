#include<iostream>
#include<string>
using  namespace std;

int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;

    cout<<"The name is "<<name<<endl;
    cout<<"The length of name is "<<name.length()<<endl;
    cout<<"The name is "<<name.substr(0,12)<<endl;
    cout<<"The name 2 to 3 is "<<name.substr(2,3)<<endl;

}
