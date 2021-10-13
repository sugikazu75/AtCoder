#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    vector <ll> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];

    map <ll, ll> table;

    vector <ll> factor(0);

    rep(i,n){
        if(!table.count(a[i])){
            table[a[i]] = 1;
            factor.push_back(a[i]);
        }
        else table.at(a[i])++;

        if(!table.count(a[i] + b[i])){
            table[a[i] + b[i]] = -1;
            factor.push_back(a[i] + b[i]);
        }
        else table.at(a[i] + b[i])--;
    }

    sort(all(factor));
    ll l = factor.size();

    vector <ll> ans1(l);
    vector <ll> ans2(l);

    for(int i=0; i<l; i++){
        ans1[i] = table.at(factor[i]);
    }

    partial_sum(all(ans1), ans2.begin());

    vector <ll> num_person(n + 1, 0);

    for(int i=0; i < l - 1; i++){
        num_person[ans2.at(i)] += (factor[i + 1] - factor[i]);
    }

    // rep(i, l) cout << factor[i] << " ";
    // cout << endl;
    // rep(i,ans1.size()) cout << ans1[i] << " ";
    // cout << endl;
    // rep(i,ans2.size()) cout << ans2[i] << " ";
    // cout << endl;

    for(int i=1; i<=n; i++){
        cout << num_person[i] << " ";
    }
    cout << endl;

    return 0;
}