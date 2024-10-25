#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int a ;
        char b;
        cin >>a;
        if (a%2!=0)cout <<"NO\n";
        else 
        {
            cout<<"YES\n";
            for(int i=0;i<a/2;i++)
            {
                b='A'+i;
                cout<<b<<b;
            }
            cout <<"\n";
        }
    }
}