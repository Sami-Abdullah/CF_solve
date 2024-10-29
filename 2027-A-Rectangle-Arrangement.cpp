#include<bits/stdc++.h>
using namespace std;
int main (){
   int test;
   cin>>test;
   while(test--){
    int n;
    cin >>n;
    int w,h,area=0;
    int maxW=0,maxH=0;
    while(n--){
        cin>>w>>h;
        maxW=max(maxW,w);
        maxH=max(maxH,h);
    }
    cout<<2*(maxW+maxH)<<endl;

   }
}