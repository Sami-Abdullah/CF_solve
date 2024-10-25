#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    while(test--)
    {
       int size;
       cin >>size;
       int arr[size];
       for(int i=0;i<size;i++)cin>>arr[i];
       bool check=true;
       int temp1=arr[0]+1,temp2=arr[0]-1;
    
       for(int i=1;i<size;i++)
       {
        if (arr[i]==temp1)
        {
            temp1=arr[i]+1;
        }
        else if (arr[i]==temp2){
            temp2=arr[i]-1;
        }
        else {
            check=false;
            break;
        }
       }
       if(check)cout<<"yes"<<endl;
       else cout<< "no"<<endl;

    }
}