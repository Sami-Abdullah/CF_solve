#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while (test--)
    {
        int n,f;
        cin >>n;
        int arr[n];
        for (int i = 0; i < n; i++)cin >>arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[arr[i]-1]==i+1)
            {
                f=1;
                break;
            }
            else f=0;
        }
        if(f)cout<<"2\n";
        else cout<<"3"<<"\n";      
    }  
}