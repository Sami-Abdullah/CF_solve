#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
   int size ;
   cin >>size;
   vector<pair<string,string>> v(size);

   for(int i=0;i<size;i++)
   {
    cin >> v[i].first >> v[i].second;
   }

   sort(v.begin(),v.end());

   int num= unique(v.begin(),v.end())- v.begin();

   cout<<num<<endl;

}
