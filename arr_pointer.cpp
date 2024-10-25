#include<iostream>
using namespace std;

int main(){
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int* p = arr;
    cout<<endl;
    for ( i = 0; i < 5; i++)
    {
        cout<<*(p++)<<endl;
    }
    cout<<endl;
    for ( i = 0; i < 5; i++)
    {
        cout<<p++<<endl;
    }
    


    return 0;
}