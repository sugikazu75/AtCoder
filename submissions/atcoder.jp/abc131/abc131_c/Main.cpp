#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    long a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<long> yaku;
    long mincd = min(c,d);
    for(int i=1; i<=pow(mincd,0.5); i++){
        if(mincd % i == 0){
            yaku.push_back(i);
            yaku.push_back(mincd/i);
        }
    }

    long gcd = 1;
    for(int x:yaku){
        if(max(c,d) % x == 0){
            if(x > gcd){
                gcd = x;
            }
        }
    }

    long lcm = gcd * (c/gcd) * (d/gcd);
    
    long ac = (a-1)/c;
    long ad = (a-1)/d;
    long acd = (a-1)/lcm;
    long bc = b/c;
    long bd = b/d;
    long bcd = b/lcm;

    cout << ( b - (bc + bd - bcd) ) - ((a-1) - (ac + ad - acd)) << endl;

}   
