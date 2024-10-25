#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size,value,consecutive=0,cnt=0;
        
        cin>> size>>value;
        int arr[size+1];
        for(int i=0;i<size;i++)cin >>arr[i];
        if (size==1)cout << "0"<<endl;
        else
        {
            sort(arr,arr+size);
            for(int i=0;i<size-1;i++)
            {
            if (arr[i+1]-arr[i]>value)
            {
                cnt++;
                if(consecutive<cnt)
                {
                    consecutive=cnt ;
                }
                cnt=0;
            }
            else cnt++;
            }
            if(consecutive<cnt+1)consecutive=cnt+1 ;
            cout << size-consecutive<<endl;
        } 
    }
}