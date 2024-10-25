#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int row,col,cnt=0,check=-1;
        cin >>row>>col;
        int r,c;
        char str[row][col];
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++){
                cin >>str[i][j];
                if(str[i][j]=='#')cnt++;
            }
            if(check<cnt)
            {
                check=cnt;
                r=i+1;
            }
            cnt=0;
        }
        for(int i=0;i<col;i++)
        {
            if(str[r-1][i]=='#'){
                c=i+1;
                break;
            }
        }
        cout <<r<<" "<<c+(check-1)/2<<endl;
    }
    
}
