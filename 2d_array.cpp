#include<iostream>
using namespace std;
int main()
{
    int a[10][10],i,j;
    cout<<"Enter the Array element :";
    for(i=0;i<3;i++)
    {
           for(j=0;j<3;j++)
           {
               cin>>a[i][j];
           }
    }

    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }


}
