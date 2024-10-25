#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int a,b,f=0;
        cin >> a>>b;
        if(a==3&&b==3)cout<<2<<" "<<2<<"\n";
        else if (a==2&&b==3)cout<<2<<" "<<2<<"\n";
        else if (a==3&&b==2)cout<<2<<" "<<2<<"\n";
        else cout<<a<<" "<<b<<"\n";
    }
}