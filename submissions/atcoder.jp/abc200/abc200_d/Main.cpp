#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];
    rep(i,n) a[i] = a[i] % 200;

    ll m = min((ll)8, n);
    vector < vector <ll> > ans(200, vector <ll>(0));

    for(int i=1; i<(1<<m); i++){
        bitset<8> s(i);
        ll tmp = 0;
        for(int j=0; j<8; j++){
            if(s.test(j)){
                tmp += a[j];
                tmp %= 200;
            } 
        }
        ans[tmp].push_back(i);
        if(ans[tmp].size() >= 2){
            ll b = ans[tmp][0];
            ll c = ans[tmp][1];
            vector <ll> factor_b(0);
            vector <ll> factor_c(0);
            bitset<8> s_b(b);
            bitset<8> s_c(c);
            rep(j,8){
                if(s_b.test(j)) factor_b.push_back(j+1);
                if(s_c.test(j)) factor_c.push_back(j+1);
            }
            sort(all(factor_b));
            sort(all(factor_c));
            cout << "Yes" << endl;
            cout << factor_b.size() << " ";
            rep(j,factor_b.size()) cout << factor_b[j] << " ";
            cout << endl;
            cout << factor_c.size() << " ";
            rep(j,factor_c.size()) cout << factor_c[j] << " ";
            cout << endl;
            return 0;
        }
    }

    cout << "No" << endl;

}
