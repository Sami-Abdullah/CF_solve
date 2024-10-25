#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while (test--)
    {
        int a;
        char c;
        string b;
        cin>>a>>c>>b;
        if(a>0&&a<12)
        {
            if(a<10)cout<<'0'<<a<<c<<b<<" AM\n";
            else cout<<a<<c<<b<<" AM\n";
        }
        else if (a==0)cout<<"12"<<c<<b<<" AM\n";
        else if (a==12)cout<<a<<c<<b<<" PM\n";
        else 
        {
            if ((a-12)<10)cout<<'0'<<a-12<<c<<b<<" PM\n";
            else cout<<a-12<<c<<b<<" PM\n";
        }  
    }
}