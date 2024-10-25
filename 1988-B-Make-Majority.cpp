#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) 
	{
        int size;
		cin >>size;
		string str;
		int cnt0=0,cnt1=0;
		bool check=false;
        cin >>str;
		for(int i=0;i<size;i++)
		{

			if (str[i]=='1')
			{
				cnt1 ++;
				check=false;
			}
			else if(!check)
			{
				cnt0 ++;
				check=true;
			}
		}
		if (size==1&&str[0]=='0')cout<<"no"<<endl;
		else if(cnt0>=cnt1)cout<<"no"<<endl;
		else cout<<"Yes"<<endl;
    }

}