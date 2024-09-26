#include<iostream>
using namespace std;

class Employee
{
private:
    int a,b,c;

    /* data */
public:
   int d,e;
   void setData(int a1,int b1,int c1);
   void getData(){
    cout<<"The values of a are "<<a<<endl;
    cout<<"The values of b are "<<b<<endl;
    cout<<"The values of c are "<<c<<endl;
    cout<<"The values of d are "<<d<<endl;
    cout<<"The values of e are "<<e<<endl;
    
   }
    
};

void Employee :: setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}


int main()
{
    Employee dng;
    dng.d = 10;
    dng.e = 20;
    dng.setData(4,5,6);
    dng.getData();
   
    
}
