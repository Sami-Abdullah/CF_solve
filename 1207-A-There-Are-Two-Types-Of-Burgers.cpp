#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin >> test ;
    while (test--) {

        int bread, patty, cutlet;
        cin >> bread >> patty >> cutlet;
        int bPrice, cPrice;
        cin >> bPrice >> cPrice;
        bread = bread / 2;
        int max = bPrice < cPrice ? cutlet : patty;
        int min = bPrice < cPrice ? patty : cutlet;
        int maxP = bPrice < cPrice ? cPrice : bPrice;
        int minP = bPrice < cPrice ? bPrice : cPrice;
        int cnt=0;

        if(bread >= max){
                cnt = cnt + max*maxP;
                bread = bread -max;
                bread = bread<=0 ? 0: bread;
        }
        else {
            cnt =cnt +bread*maxP;
            bread=0;
        }

        if(bread >= min){
            cnt =cnt +min*minP;
        }
        else {
            cnt =cnt +bread*minP;
        }
        cout <<cnt <<endl;
    }
}