#include<bits/stdc++.h>
using namespace std;
bool compare (int a,int b)
{
    return a>b;
}
int main ()
{
    int test;
    cin >>test;
    while (test--)
    {
        int size;
        cin >>size ;
        int arr[size];
        for(int i=0;i<size;i++)cin>>arr[i];
        int sum=0,temp;
        for(int i=0;i<size;i++)sum=sum+arr[i];
        if(sum==0)temp=0;
        else if (sum<0)  
        {
            sort(arr,arr+size);
            temp=1;
        }
        else {
            sort(arr,arr+size,compare);
             temp=1;
        }
        if(temp){
            cout<<"yes\n";
            for(int i=0;i<size;i++)cout<<arr[i]<<" ";
            cout<<"\n";
        }
        else cout<<"no\n";
    }   
}