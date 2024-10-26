#include<iostream>
using namespace std;


int add(int a, int b)
{
    if (((a>0)||(a<0) && (a==0)) && ((b>0)||(b<0) && (b==0)))
    {
            return a+b;
    }
    else
    {
        return 0;
    }
}


int onoff_funcatio(char c)
{
    if(c == 'o' || c == 'O')
    {
        return 1;
    }
}
int main(){
    char onoff;
    cout<<"If on to calculater enter 'o' or 'O'."<<endl;
    cin>>onoff;
    int on = onoff_funcatio(onoff);
    if ( on == 1)
    {
        int a,r;
        int *fa = &a;
        cin>>a;
       while (1)
       {
        int i = 0,j =0;
       
        if(j==1)
        {
            cin>>*fa;
            j--;
        }
         char ch;
        cin>>ch;
        int b;
        cin>>b;

        switch (ch)
        {
        case '+':
        a = add(a,b);
        if (a)
        {
            cout<<"= "<<a<<endl;
            cout<<endl;
        }
        else
        {
            cout<<"syntax error"<<endl;
        }
        
            /* code */
            break;

        case 'a':
            delete fa;
            ++j;
            break;
            
        
        default:
            break;
        }
        i++;
       }
       
    }
    
    return 0;
}