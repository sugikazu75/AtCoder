#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    ll n = s.size();

    ll tmpku = 0;
    vector <ll> ans(n+1);
    ans[0] = 0;

    for(ll i=0; i<n; i++){
        if(s[i] ==  '<') tmpku++;
        else tmpku = 0;
        ans[i+1] = tmpku;
    }

    ll tmptu = 0;
    vector <ll> ans1(n+1);
    ans1[n] = 0;

    for(ll i=n-1; i>=0; i--){
        if(s[i] == '>') tmptu++;
        else tmptu = 0;
        ans1[i] = tmptu;
    }

    vector <ll> ans2(s.size()+1);

    ll cnt = 0;

    rep(i,n+1){
        ans2[i] = max(ans[i], ans1[i]);
        cnt += ans2[i];
    }

    cout << cnt << endl;
}
