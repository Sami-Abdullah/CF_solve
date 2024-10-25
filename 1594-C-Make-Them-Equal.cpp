#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
      int size;
      bool check=true;
      char cha;
      cin>> size>>cha;
      string str;
      cin>>str;
      for(int i=0;i<size;i++)
      {
        if(str[i]!=cha){
          check= false;
        }
      }
      if(check)cout<<0<<endl;
      else
      {
        int x=-1;
        for(int i=1;i<=size;i++)
        {
            bool valid=true;
            for(int j=i;j<=size;j=j+i)
            {
                if(str[j-1]!=cha)
                {
                    valid=false;
                    break;
                }
            }
            if(valid)
            {
              x=i;
              break;
            }
        }
        if(x!=-1)
        {
          cout<<1<<endl;
          cout<<x<<endl;
        }
        else
        {
          cout<<2<<endl;
          cout<<size<<" "<<size-1<<endl;
        }
      }
    }
}