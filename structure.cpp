#include<iostream>
using namespace std;
typedef struct employee
{
    int id;
    string name;
    float salery;
}ep;

int main(){
    ep dng[5];

    for (int i = 0; i < 5; i++)
    {
        cin>>dng[i].id;
        cin>>dng[i].name;
        cin>>dng[i].salery;
    }
    cout<<"Information of employee."<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Employee id is :"<<dng[i].id<<endl;
        cout<<"Name is :"<<dng[i].name<<endl;
        cout<<"Salery :"<<dng[i].salery<<endl;
    }
    return 0;
}