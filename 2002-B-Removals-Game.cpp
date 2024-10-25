#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int size,f1=1,f2=1,f3=0;
        cin >>size;
        int arr1[size],arr2[size];
        for(int i=0;i<size;i++)cin >>arr1[i];
        for(int i=0;i<size;i++)cin >>arr2[i];
        
        for(int i=0;i<size;i++)
        {
            if(arr1[i]!=arr2[i]){
                f1=0;
                break;
            }
        }
        if(f1)cout<<"Bob"<<endl;
        else{
            for(int i=0,j=size-1;i<size;i++,j--)
            {
            if(arr1[i]!=arr2[j]){
                f2=0;
                break;
            }
            }
            if(f2)cout<<"Bob"<<endl;
            else f3=1;
        }
        if (f3)cout << "Alice"<<endl;
        
    }
}