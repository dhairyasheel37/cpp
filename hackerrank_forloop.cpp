#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,i;
    cin>>a;
    cin>>b;
    
    string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(i=a;i<=b;i++)
    {
        if(i<=9)
        {
            cout<<str[i]<<endl;
        }
        else
        {
            if(i%2==0)
            {
                cout<<"even"<<endl;
            }
            else
            {
                cout<<"odd"<<endl;
            }
        }
    }
    
    // Complete the code.
    return 0;
}
