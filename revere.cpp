#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,t;
    cin>>t;
    int a[t];
   for (i=0; i<t; i++) {
    {
        cin>>a[i] ;
    }  
    
   }
   
   for (i=t-1; i>=0; i--) {
       cout<<a[i]<<" ";
   } 
    return 0;
}
