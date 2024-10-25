#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size,queries,even=0,odd=0;
        cin>>size>>queries;
        long long arr[size],sum=0;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
            if(arr[i]%2==0)even++;
            else odd++;
        }
        for(int i=0;i<queries;i++)
        {
            int a,b;
            cin>>a>>b;
            if(a==0)
            {
                sum=sum+b*even;
                if(b%2!=0)even=0,odd=size;
            }
            else
            {
                sum=sum+b*odd;
                if(b%2!=0)even=size,odd=0;
            }
            cout<<sum<<"\n";
        }
    }
}