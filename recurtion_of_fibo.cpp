#include<iostream>
using namespace std;

int recurtion_fibo(int n)
{
    if(n<2)
    {
        return 1;
    }
        return recurtion_fibo(n-2) + recurtion_fibo(n-1);
    
}
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<<recurtion_fibo(n)<<endl;
    return 0;
}
