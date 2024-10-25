#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while (test--)
    {
        int n,i=2,j;
        cin>>n;
       if(n==1)cout<<"1"<<"\n";
       else 
       {
        while(i<=n)
        {
            j=i;
            i=i*2;
        }
        cout<<j<<"\n";
       }
    }
}