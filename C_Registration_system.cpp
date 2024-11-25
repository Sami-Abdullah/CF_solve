#include<bits/stdc++.h>
using namespace std;
int main()
{
   int size;
   cin >>size;
   map<string , int> m;

   for(int i=0 ;i<size ;i++)
   {
        string s;
        cin >> s;
        m[s]++;
        if(m[s]>1) cout <<s<<m[s]-1<<endl;
        else cout<<"OK"<<endl;

   }
}