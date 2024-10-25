#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin>>test;
    while(test--){
        int n,m,q,cnt=0;
        cin>>n>>m>>q;
        int arr[2];
        cin >>arr[0]>>arr[1];
        int k ;
        cin >>k;
        sort(arr,arr+2);
        if(k<arr[0]){
            cnt =arr[0]-1;
        }
        else if (k>arr[1]){
            cnt =n-arr[1];
        }
        else {
            cnt =(arr[1]-arr[0])/2;
        }

        cout <<cnt<<endl;    

    }
}