#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        long long  a,b,c,j;
        cin>> a>>b>>c;
        j=(c/a+1)+(c/b+1);
        cout <<j<<"\n";
    }
}