#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while (test--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a+b==c)cout<<"yes"<<"\n";
        else if (b+c==a)cout<<"yes"<<"\n";
        else if (c+a==b) cout<<"yes"<<"\n";
        else cout<<"no"<<"\n";     
    }
    
}