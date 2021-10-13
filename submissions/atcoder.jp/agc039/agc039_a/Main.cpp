#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    ll k;
    cin >> k;

    ll n = s.size();

    if(n == 1){
        cout << k / 2 << endl;
        return 0;
    }

    vector <ll> seq;
    char now = s[0];
    ll cnt = 1;
    for(ll i=1; i<n; i++){
        if(now == s[i]){
            cnt++;
            if(i == n-1){
                seq.push_back(cnt);
            }
        }
        else{
            seq.push_back(cnt);
            now = s[i];
            cnt = 1;
            if(i == n-1){
                seq.push_back(cnt);
            }
        }
        
    }

    /*for(auto x:seq){
        cout << x << " ";
    }*/

    if(s[0] != s[n-1]){//seq.size()>1
        ll ans = 0;
        for(ll x:seq){
            ans += (x / 2) * k;
        }
        cout << ans << endl;
    }

    else{
        if(seq.size() == 1){//all same
            cout << (n * k) / 2 << endl;
        }
        else{//seq.size()>=3
            ll loop = seq[0] + seq[seq.size()-1];
            ll ans = 0;
            for(ll i=1; i<seq.size()-1; i++){
                ans += seq[i] / 2 * k; 
            }
            ans += seq[0] / 2;
            ans += seq[seq.size()-1] / 2;
            ans += (k-1) * (loop / 2);

            cout << ans << endl;

        }
    }



}
