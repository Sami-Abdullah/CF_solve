#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--){
        int n,cnt =0;
        cin >>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                    cin >>arr[i][j];
                    if(arr[i][j]<0)cnt=cnt +abs(arr[i][j]);
            }
        }
        cout<<cnt<<endl;
    }
}