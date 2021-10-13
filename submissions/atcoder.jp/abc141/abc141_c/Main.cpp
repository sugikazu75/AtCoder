#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    long n, k, q;
    cin >> n >> k >> q;
    vector <int> win(q);
    rep(i,q) cin >> win[i];

    vector <int> point(n,k);
    vector <int> countlose (n,q);
    for(int i=0; i<q; i++){
        countlose[win[i] - 1] --;
    }

    rep(i,n) point[i] -= countlose[i];

    for(int i=0; i<n; i++){
        if(point[i] > 0) cout << "Yes" <<endl;
        else cout << "No" << endl;
    }

}
