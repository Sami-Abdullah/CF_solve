#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int size,piece,sum=0;
        cin >> size>>piece;
        int arr[piece];
        for(int i=0;i<piece;i++)cin >>arr[i];
        sort (arr,arr+piece,greater<int>());
        for(int i=1;i<piece;i++)
        {
            if(arr[i]!=1)sum=sum+arr[i]-1+arr[i];
            else{
                sum=sum+1;
            }
        }
        cout<<sum<<endl;

    }

}