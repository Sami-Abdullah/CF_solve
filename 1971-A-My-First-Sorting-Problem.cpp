#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while(test--)
    {
        int a,b;
        cin >>a>>b;
        if(a>b)cout<<b<<" "<<a<<"\n";
        else cout<<a<<" "<<b<<"\n";
    }
}