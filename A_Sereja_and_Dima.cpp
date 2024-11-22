#include<bits/stdc++.h>
using namespace std;
int main()
{
   int size;
   cin>>size;
   vector<int> v(size);
   for(int i=0;i<size;i++) cin>>v[i];
   int s=0,d=0;
    
   for(int i=0;i<size;i++)
   {
        if(i%2==0)
        {
            s+=max(v[0],v.back());
        }
        else
        {
            d+=max(v[0],v.back());
        }
        if(v[0]>=v.back())
        {
            v.erase(v.begin());
        }
        else 
        {
            v.erase(v.end()-1);   
        }
   }

   cout<<s<<" "<<d<<endl;
}
   