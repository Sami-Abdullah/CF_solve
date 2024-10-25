#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int n,a,b,d;
        cin >>n>>a>> b;
        d=(n+a-1)/a;
        if(a > b) d = 1;
        cout << d << endl;    
        
    }
}