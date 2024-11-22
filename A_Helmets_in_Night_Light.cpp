#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin >>test;
   while(test--)
   {
    int size,cost;
    cin >>size>> cost;

    vector<pair<int,int>> p(size);

    for(int i=0;i<size;i++) cin >> p[i].second;
    for(int i=0;i<size;i++) cin >> p[i].first;

        if (size==1)
        {
            cout<<cost<<endl;
            continue;
        }

    sort (p.begin(),p.end());
    bool check = true;
    long long sum = cost, csize = 1;

        if(p[0].first<cost)
        {
            check = false;
            for(int i=0;i<size&&csize<size;i++)
            {
                if(p[i].first<cost)
                {
                    csize += p[i].second;
                    if(csize>size) p[i].second = size- (csize - p[i].second);
                    sum += (long long)p[i].first * (long long)p[i].second;

                }
                else break;
            }
        
        if(size>csize) size -= csize;
        else size = 0;
        }
    long long j = (long long)cost*size ;
    if (check) cout<<j<<endl;
    else cout<<j+sum<<endl;

           

   } 
}