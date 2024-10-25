#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int l,r,L,R;
        cin>>l>>r;
        cin>>L>>R;
        
        int mx=min(r,R);
        int mx1=max(r,R);
        int mn=max(L,l);
        int mn1=min(L,l);
        if(mx<mn)cout<<"1"<<endl;
        else{
            if(mn1==mn&&mx==mx1)cout<<mx-mn<<endl;
            else if(mn1<mn&&mx<mx1)cout<<mx-mn+2<<endl;
            else cout<<mx-mn+1<<endl;
        }
    }
}