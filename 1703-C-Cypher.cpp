#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    while (test--)
    {
        int size;
        cin>>size;

        int arr1[size];
        for(int i=0;i<size;i++)cin>>arr1[i];

        for(int i=0;i<size;i++)
        {
            int a;
            cin >>a;
            string str;
            cin >>str;
            for(int j=0;j<a;j++)
            {
                if(str[j]=='U')
                {
                    if(arr1[i]-1<0)arr1[i]=9;
                    else arr1[i]=arr1[i]-1;
                }
                else{
                    if(arr1[i]+1>9)arr1[i]=0;
                    else arr1[i]=arr1[i]+1;
                }
            }
        }
        for(int i=0;i<size;i++)cout<<arr1[i]<<" ";
        cout<<"\n";   
    }   
}