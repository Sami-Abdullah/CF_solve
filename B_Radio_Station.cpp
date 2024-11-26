#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,c;
    cin >>s>>c;
    string s1,s2;

    map<string, string> server;

    for(int i=0;i<s;i++){
        cin>>s1>>s2;
        server[s2]=s1;
    }
    for(int i=0;i<c;i++){

        cin >>s1>>s2;
        s2.erase(s2.end()-1);
        cout <<s1<<" "<<s2<<"; #"<<server[s2]<<endl;
    }
}