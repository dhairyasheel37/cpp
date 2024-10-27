#include<iostream>
using namespace std;

// inline int  product (int a,int b)
// {
//     return a*b;
// }

inline int  product (int a,int b)//This inline function not use when static variables are there, 
{                                  //
    static int c = 0;//this executes only once.
    c = c + 1;//next time this function is run , the value of c will be retained.
    return a*b +c;
}

int main(){
    int a, b;
    cout<<"Enter the value :"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
   
    
    return 0;
}