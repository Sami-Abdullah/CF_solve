#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    char a ;
    cin >>a;
    getline(cin,s1);
    s1 +=a;
    cin>>a;
    getline(cin, s2);
    s2 +=a;
    cin>>a;
    getline (cin, s3);
    s3 += a ;

    int c1=0,c2=0,c3=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='u'||s1[i]=='o')c1++;
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='u'||s2[i]=='o')c2++;
    }
    for(int i=0;i<s3.size();i++){
        if(s3[i]=='a'||s3[i]=='e'||s3[i]=='i'||s3[i]=='u'||s3[i]=='o')c3++;
    }
    if (c1==5&&c2==7&c3==5)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}