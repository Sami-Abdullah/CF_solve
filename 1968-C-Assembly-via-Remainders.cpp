#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size,temp;
        cin>>size;
        int arr[size];
        arr[0]=1000;
        temp=arr[0];
        for(int i=1;i<size;i++){
            cin >>arr[i];
            temp=temp+arr[i];
            arr[i]=temp;
            
        }
        
        for(int i=0;i<size;i++)cout<<arr[i]<<" ";
        cout<<endl;
    }
}