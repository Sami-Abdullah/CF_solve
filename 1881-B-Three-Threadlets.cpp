#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=0;i<n;++i) {
        int a,b,c;
        cin >>a>>b>>c;

        int arr[3]={a,b,c};
        sort(arr, arr + 3);

        a=arr[0];
        b=arr[1];
        c=arr[2];

        if (a == b && b == c){
            cout <<"YES"<<endl;
        } 
        else if (b%a==0&&c%a==0&&(b/a-1)+(c/a-1)<=3) {
            cout <<"YES"<<endl;
        } 
        else {
            cout <<"NO"<<endl;
        }
    }
}