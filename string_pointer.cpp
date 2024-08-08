#include<iostream>
#include<cctype>
using namespace std;
void firstname(string &name)
{
    name[0]=toupper(name[0]);
}
int main()
{
    string name;
    cout<<"Enter the name :";
    cin>>name;
    firstname(name);
    cout<<"Modified name is "<<name<<endl;
}
