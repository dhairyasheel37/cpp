#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    public:
        void read(void);
        void chk_bin(void);
};

void binary :: read(void)
{
    cout<<"Enter a binary"<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if(s.at(i)!= '0' && s.at(i)!='1')
        {
            cout<<"Invalid binary"<<endl;   
            exit(0);
        }
    }
    
     
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
}
