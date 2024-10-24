#include<iostream>
using namespace std;
int main()
{
    // int age ;
    // cout<<"Tell me your age"<<endl;
    // cin>>age;
    // if(age<18  && age>0)
    // {
    //     cout<<"You not come to my party"<<endl;
    // }
    // else if(age<1)
    // {
    //     cout<<"You are not born"<<endl;
    // }
    // else
    // {
    //     cout<<"You come to the party"<<endl;
    // }
    // return 0;
    

    int operarion,a,b;
    cout<<"Enter the operation :"<<endl;
    cout<<"addition 1 "<<endl;
    cout<<"subatraction 2 "<<endl;
    cout<<"multiplication 3 "<<endl;
    cout<<"Divition 4 "<<endl;
    cin>>operarion;
    cout<<"Enter the value of a is :";
    cin>>a;
    cout<<"Enter the value of b is :";
    cin>>b;

    switch (operarion)
    {
    case 1:
        cout <<"Addition :"<<a+b<<endl;
        break;

    case 2:
        cout <<"Substraction :"<<a-b<<endl;
        break;

    case 3:
        cout <<"Multiplication :"<<a*b<<endl;
        break;
    
    case 4:
        cout<<"Divition :"<<a/b<<endl;
        break;
    
    default:
    cout<< "incorrect choice"<<endl;
        break;
    }
    

}