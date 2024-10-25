#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while (test--)
    {
        int a,b,c,k;
        cin >>a>>b>>c;
        int new_a = b - (c - b);
        int new_b = a + (c - a)/2;
        int new_c = a + 2*(b - a);
        if(new_a >= a && new_a % a == 0 && new_a != 0)
        {
        cout << "YES\n";
        }
        else if(new_b >= b && (c-a)%2 == 0 && new_b % b == 0 && new_b != 0)
        {
        cout << "YES\n";
        }
        else if(new_c >= c && new_c % c == 0 && new_c != 0)
        {
        cout << "YES\n";
        }
        else cout << "NO\n";
    }   
}