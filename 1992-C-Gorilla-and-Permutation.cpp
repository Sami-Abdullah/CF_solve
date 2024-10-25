#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int a,b,c,i,j;
        cin >>a>>b>>c;
        for( i=a;b<i;--i)cout <<i<<" ";
        for(j=0;j<i;j++ )cout <<j+1<<" ";
        cout<<endl;

    }
}