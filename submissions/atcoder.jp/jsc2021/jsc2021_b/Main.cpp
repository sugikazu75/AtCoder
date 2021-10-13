#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,m;
    cin >> n >> m;
    vector <ll> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    vector <ll> exist(10000, 0);
    rep(i,n) exist[a[i]]++;
    rep(i,m) exist[b[i]]++;

    for(int i=0; i<exist.size(); i++){
        if(exist[i] == 1){
            cout << i << " ";
        }
    }
    cout << endl;
}