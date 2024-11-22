#include<bits/stdc++.h>
using namespace std;
int main ()
{
   vector<int> v ={1,2,3,4,5,6};
   sort(v.rbegin() ,v.rend());
   for(auto x: v)cout<<x<<" ";
   bool check = v.empty();
   cout <<endl<< check<<endl;
   v.erase(v.begin(),v.end()-3);
   for(auto x:v)cout<<x<<" ";
   cout<<endl;
   reverse (v.begin(),v.end());
   for(auto x:v)cout<<x<<" ";

  
















   
}



