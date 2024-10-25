#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size,high=-1,low=0,cnt1=0,cnt2=0;
        bool check1=false,check2=false;
        cin >>size;
        int arr[size];
        for(int i=0;i<size;i++)cin >>arr [i];
        
        for(int i=0,j=size-1;i<size-1;j--,i++)
        {
            if (arr[i]==arr[i+1]&&check1==false)cnt1++;
            if (arr[j]==arr[j-1]&&check2==false)cnt2++;
            if(arr[i]!=arr[i+1]&&check1==false)
            {
                low= i+2;
                check1= true;
            }
            if (arr[j]!=arr[j-1]&&check2==false)
            {
                high=j;
                check2=true;
            }
            if (check1==true&&check2==true)break;
        }
        if(cnt1>cnt2&&arr[0]!=arr[size-1]) high=size;
        else if(cnt1<cnt2&&arr[0]!=arr[size-1]) low=1;
        else if(cnt1==cnt2&&arr[0]!=arr[size-1])high=size;
        
        int ans= high-low+1;
        cout <<ans<<endl;
    }
}