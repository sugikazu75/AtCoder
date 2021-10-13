#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    long long r,b;
    cin >> r >> b;
    long long x,y;
    cin >> x >> y;

    long long ok = 0;
    long long ng = r + b;

    while(abs(ok - ng) > 1){
        long long mid = (ok + ng) / 2; //mid 束できるか
        long long remr = r - mid;
        long long remb = b - mid;
        
        if(((remr/(x-1) + remb/(y-1)) >= mid) && (remr>=0) && (remb>=0)){
            ok = mid;
        } 
        else{
            ng = mid;
        }
    }

    cout << ok << endl;
}
