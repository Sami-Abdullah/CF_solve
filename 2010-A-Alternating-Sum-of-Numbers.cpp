#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin >>test;
   while(test--)
   {
    int size;
    cin >>size;
    int arr[size];
    for(int i=0;i<size;i++)cin >> arr[i];
    int sum=0;
    for(int i=0;i<size;i++)
    {
        if (i%2==0)sum=sum+arr[i];
        else sum=sum-arr[i];
    }
    cout <<sum<<endl;
   } 
}