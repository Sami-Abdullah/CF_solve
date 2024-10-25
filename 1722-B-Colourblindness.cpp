#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n,f=0;
        string a,b;
        cin>>n>>a>>b;
        for(int i =0;i<n;i++)
        {
            if (a[i]=='G'&&b[i]=='B')f=1;
            else if (b[i]=='G'&&a[i]=='B')f=1;
            else if (a[i]==b[i])f=1;
            else {
                f=0;
                break;
            }
        }
        if(f==1)cout<<"yes"<<"\n";
        else cout<<"no"<<"\n";
    }   
}