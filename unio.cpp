#include<iostream>
using namespace std;
union money
{
    //union combine membery into money 
    //from below only one can accsess.
    int rupee;
    char  name;
    int dollers;
    char post;
    
};

int main(){
    union money m1;

    m1.rupee = 2;
    // m1.name = 'd';
    // m1.dollers = 3;
    // m1.post = 'p';

    cout<<m1.rupee<<endl;
    // cout<<m1.name<<endl;
    // cout<<m1.dollers<<endl;
    // cout<<m1.post<<endl;

    return 0;
}