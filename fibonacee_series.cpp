#include<iostream>
using namespace std;

int fibonacci_sri(int a,int b)
{
    return a+b;

}
int main(){
    int a = 1,b=1,n;
    cout<<"Enter the nth position :"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" " ;
    for (int i = 0; i < n-2; i++)
    {
        int f = fibonacci_sri(a,b);
       cout<<f<<" ";
       a = b;
       b = f;
    }
    
    
    return 0;
}