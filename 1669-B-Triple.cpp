#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,f=0;
        cin >>n;
        int arr1[n],arr2[n]={0};
        for(int i=0;i<n;i++)cin>>arr1[i],arr2[arr1[i]-1]++;
        for(int i=0;i<n;i++)
        {
            if (arr2[i]>=3)
            {
                f=1;
                cout<<i+1<<"\n";
                break;
            }
        }
        if(f==0)cout<<"-1"<<"\n";
    }
    
}