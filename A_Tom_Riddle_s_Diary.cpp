#include<bits/stdc++.h>
using namespace std;
int main()
{
   int size;
   cin >>size;
   map<string,int> m;
   vector<bool>v(size);
   for(int i=0;i<size;i++){
        string s;
        cin>>s;
        m[s]++;
        if(m[s]==1) v[i] = false;
        else v[i] = true;
   }
   for(int i=0;i<size;i++){
        if(v[i])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }
}