#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int size,f;
        cin >>size;
        int arr[size];
        for(int i=0;i<size;i++)cin>>arr[i];
        for(int i=0;i<size-1;i++)
        {
            if(arr[i]>arr[i+1])f=0;
            else{
                f=1;
                break;
            }
        }
        if (f==1)cout<<"yes\n";
        else cout<<"no\n";
    }
}