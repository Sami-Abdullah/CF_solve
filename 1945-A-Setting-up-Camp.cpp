#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long  a,b,c,k;
        cin >>a>>b>>c;
        k=(3-b%3)%3;
        if(b>0&&k>c)cout<<"-1\n";
        else{
            c -= k;
            b += k;
            k = a + c/3 + (c%3+1)/2 + b/3;
            cout<<k<<"\n";
        }     
    }
}