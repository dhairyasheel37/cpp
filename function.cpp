#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int multiplication(int a,int b)
{
    return a*b;
}

int divition(int a,int b)
{
    return a/b;
}

int main(){
    int ch,a,b,r;
    cout<<"Enter the choice :"<<endl;
    cout<<"For addtion 1."<<endl;
    cout<<"For substacation 2."<<endl;
    cout<<"For multiplication 3."<<endl;
    cout<<"For divtion 4."<<endl;
    
    cout<<"Enter 1st number :"<<endl;
    cin>>a;
    cout<<"Enter 2nt number :"<<endl;
    cin>>b;

    switch (ch)
    {
    case 1:
        r = add;
        break;
    case 2 
    default:
        break;
    }

    return 0;
}