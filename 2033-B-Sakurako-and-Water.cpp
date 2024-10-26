#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--){
        int n,cnt =0,k=0,l=0;
        cin >>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){cin >>arr[i][j];
            }
        }
        for(int i=0;i<n;i++){
            k=0,l=0;
            for(int j=i;j<n;j++){
                if(arr[k][j]<0){
                    l=max(abs(arr[k][j]),l);
                }
                k++;
            }
            cnt +=l;
        }
        for(int i=1;i<n;i++){
            k=i,l=0;
            for(int j=0;j<n-i;j++){
                if(arr[k][j]<0)l=max(abs(arr[k][j]),l);
                k++;
            }
            cnt +=l;
        }
        cout << cnt <<endl;
    }
}