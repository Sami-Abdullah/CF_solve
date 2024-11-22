#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin>>test;
    while (test--)
    {
        int n, k, cnt=0;
        cin >> n >> k;
        int arr[k]={0};
        for(int i=0;i<k;i++){
            int b,c;
            cin >> b >> c;
            if(arr[b-1]==0) cnt++;
            arr[b-1]+=c;
        }
        sort(arr,arr+k,greater<int>());

        if(n>cnt) n=cnt;
        
        long long max=0;
        for(int i=0;i<n;i++){
            max += arr[i];
        }
        cout << max << endl;
    } 
}