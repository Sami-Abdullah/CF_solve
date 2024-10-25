#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while (test--)
    {
        int a,b,c;
        cin >>a>>b>>c;
        if (a*b>(a/2)*c+(a%2)*b)
        {
            cout<<(a/2)*c+(a%2)*b<<"\n";
        }
        else 
        {
            cout<<a*b<<"\n";
        }
    }
    
}