#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int col,temp;
        cin >>col;
     char str[col][4];
     for(int i=0;i<col;i++)
     {
        for(int j=0;j<4;j++)
        {
            cin >>str[i][j];
        }
     }
    for(int i=col-1;i>=0;i--)
     {
        for(int j=3;j>=0;j--)
        {
           if(str[i][j]=='#')
           {
            temp=j+1;
            break;
           }
        }
        cout<<temp<<" ";
     }
     cout<<endl;

      
    }
}