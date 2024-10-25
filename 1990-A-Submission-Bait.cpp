#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int n,cnt=0;
        cin >>n;
        int arr1[n],arr2[n+1]={0};
        for(int i=0;i<n;i++)cin>> arr1[i],arr2[arr1[i]]++;
        
        for (int i=1;i<=n;i++)
        {
            if(arr2[i]%2==1)
            {
                cnt =1;
                break;
            }
        }
        if(cnt)cout<< "yes"<<endl;
        else cout << "no"<<endl;
    }
}