#include<bits/stdc++.h>
using namespace std;
int main (){

   int test;
   cin >>test;
   while(test--)
   {
    int n;
    cin >>n;
    int arr1[n],arr2[101]={0},max=0;
    for(int i=0;i<n;i++)
    {
        cin >>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        arr2[arr1[i]]++;
        if(arr2[arr1[i]]>max)max=arr2[arr1[i]];
    }
    if (n==1)cout<<"0"<<endl;
    else cout<<n-max<<endl;
   }

}