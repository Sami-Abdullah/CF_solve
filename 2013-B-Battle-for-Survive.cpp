#include<bits/stdc++.h>
using namespace std;
int main (){
   int test;
   cin>>test;
   while(test--)
   {
        int n;
        long long cnt=0;
        cin >> n;
        vector<long long > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            cnt=cnt+v[i];
        }
        cnt =cnt -v[n-1]-v[n-2];

        v[n-2]=v[n-2]-cnt;
        v[n-1]=v[n-1]-v[n-2];
        cout<<v[n-1]<<endl;
   }
}