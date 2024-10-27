#include<iostream>
using namespace std;


int add(int a, int b)
{
    if (!((a>0)||(a<0) && (a==0)) && ((b>0)||(b<0) && (b==0)))
    {
          return 0;  
    }
    return a+b;
}
int sub(int a,int b)
{
    if (!((a>0)||(a<0) && (a==0)) && ((b>0)||(b<0) && (b==0)))
    {
          return 0;  
    }
    return a-b;
}

int multiplication(int a,int b)
{
    if (!((a>0)||(a<0) && (a==0)) && ((b>0)||(b<0) && (b==0)))
    {
          return 0;  
    }
    return a*b;
}

int divition(int a,int b)
{
    if (!((a>0)||(a<0) && (a==0)) && ((b>0)||(b<0) && (b==0)))
    {
          return 0;  
    }
    return a/b;
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
        cout<<"All Clear button is 'a' or 'A'."<<endl;
        cout<<"off button 'Ctal + C'."<<endl;
        cout<<"Addition  '+'."<<endl;
        cout<<"Substraction '-'."<<endl;
        cout<<"Multiplication '*'."<<endl;
        cout<<"divition '/'."<<endl;
        int a,r,j=0;
        int *fa = &a;
        
        while (1)
        {
            
            cin>>a;
            
            while (1)
            {
        
            char ch;
            int b;
            
            cin>>ch;
            

            if (ch == 'a')
            {
                break;
            }
            else
            {
                cin>>b;
            }
            

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
                    cout<<"All clear."<<endl;
                    break;
            
                case '-' :
                    a = sub(a,b);
                    if (a)
                    {
                        cout<<"= "<<a<<endl;
                        cout<<endl;
                    }
                    else
                    {
                       cout<<"syntax error"<<endl;
                    }
                    break;
            
                case '*' :
                    a = multiplication(a,b);
                    if (a)
                    {
                        cout<<"= "<<a<<endl;
                        cout<<endl;
                    }
                    else
                    {
                       cout<<"syntax error"<<endl;
                    }
                    break;
                
                case '/' :
                    a = divition(a,b);
                    if (a)
                    {
                        cout<<"= "<<a<<endl;
                        cout<<endl;
                    }
                    else
                    {
                       cout<<"syntax error"<<endl;
                    }
                    break;               
                    
                default:
                    cout<<"syntax error"<<endl;
                    break;
            }   
        }
        }     
       
    }
    
    return 0;
}
