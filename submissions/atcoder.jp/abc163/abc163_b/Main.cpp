#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n, m;
    cin >> n >> m;
    
    long sum=0;
    rep(i,m){
        int d;
        cin >> d;
        sum += d;
    }

    if(sum > n) cout << -1 << endl;
    else cout << n - sum << endl;
}
