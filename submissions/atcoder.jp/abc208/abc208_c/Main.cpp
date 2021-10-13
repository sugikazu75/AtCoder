#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;
    vector <ll> a(n);
    map <ll, ll> table; //num, index
    priority_queue <ll, vector<ll>, greater<ll>> num;
    rep(i,n){
        cin >> a[i];
        table[a[i]] = i;
        num.push(a[i]);
    }

    vector <ll> ans(n,0);

    ll loop = k / n;
    rep(i,n){
        ans[i] = loop;
    }

    ll amari = k - loop * n;

    rep(i,amari){
        ll tmp = num.top();
        num.pop();
        ans[table.at(tmp)]++;
    }


    rep(i,n){
        cout << ans[i] << endl;
    }



}
    
