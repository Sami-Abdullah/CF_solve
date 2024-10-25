#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        long long n,f,a,b,sum=0;
        cin>>n>>f>>a>>b;
        long long arr[n];
        for(int i=0;i<n;i++)cin >>arr[i];

        long long temp=0;
        for(int i=0;i<n;i++)
        {
            if((arr[i]-temp)*a<b)
            {
                f=f-(arr[i]-temp)*a;
            }
            else f=f-b;

            temp=arr[i];
        }
        if(f<=0)cout<< "NO"<<endl;
        else cout << "YES"<<endl;
        

       
    }
}