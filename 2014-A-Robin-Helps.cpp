#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin>>test;
    while(test--){
        int size,k,sum=0,cnt=0;
        cin>>size>>k;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        for(int i=0;i<size;i++){
            if(arr[i]>=k)sum=sum+arr[i];
            else if(arr[i]==0&&sum>0)sum--,cnt++;
        }
        cout<<cnt<<endl;
    }
}