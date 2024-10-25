#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>> test;
    while (test--)
    {
        int n,k,m,f=0,l=0;
        cin >>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];

        for(int i=0;i<n;i++)
        {
            m=arr[i]%k;
            if (m==0)m=m+k;
            for(int j=m;j<=n;j=j+k)if(i+1==j)
            {
                f=1;
                break;
            }
            if(f==0)l++;
            f=0;
        }
        if(l==0)cout<<"0\n";
        else if(l==2)cout<<"1\n";
        else cout<<"-1\n";
    }  
}