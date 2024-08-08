#include<iostream>
using namespace std;
void bubble(int n,int *a)
{
    int pass,i;
    for(pass=0;pass<n-1;pass++)
    {
        for(i=0;i<n-pass-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int t=0;
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
}
void selection(int n,int a[])
{
    int pass,i,mini,temp;
    for(pass =0;pass<n-1;pass++)
    {
        mini=pass;
        for(i=pass+1;i<n;i++)
        {
            if(a[i]<a[mini])
            {
                mini=i;
            }
        }
        if(mini!=pass)
        {
            temp=a[mini];
            a[mini]=a[pass];
            a[pass]=temp;

        }
    }
}

int main ()
{
    int a[10],b[10],i,size;
    cout<<"The size of array ";
    cin>>size;

    cout<<"Enter the array element "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<size;i++)
    {
        b[i]=a[i];
    }


    selection(size,a);
    cout<<"This is by selection short :";
    for(i=0;i<size;i++)
    {
        cout<<" "<<a[i];
    }
    bubble(size,b);
    cout<<endl<<"This is buy selection short :";
    for(i=0;i<size;i++)
    {
        cout<<" "<<b[i];
    }
}

