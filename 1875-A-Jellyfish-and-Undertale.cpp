#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--){
        long long max,intial,tool,i,cnt=0;
        cin>>max>>intial>>tool;
        long long arr[tool];
        for( i=0;i<tool;i++)cin>>arr[i];
        sort(arr,arr+tool);
        i=0;
        int j=tool+1;
        while(j--)
        {
           cnt =cnt +intial-1;
           intial=1;
           if(i<tool){
                if(arr[i]+intial>max) intial = max;
                else intial = arr[i]+intial;
                i++;
            }

        }
        cout <<cnt+1<<endl;
    }
}
