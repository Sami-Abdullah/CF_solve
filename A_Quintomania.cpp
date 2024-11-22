#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        bool check=true;
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])==5||abs(arr[i]-arr[i+1])==7){
                continue;
            }
            else {
                check=false;
                break;
            }
        }
        if(check)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    
}