#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, m;
    cin >> n >> m;

    bool s0 = false;
    bool s1 = false;
    bool t0 = false;
    bool t1 = false;

    vector <int> s(n);
    vector <int> t(m);
    
    rep(i,n){
        cin >> s[i];
        if(s[i] == 0) s0 = true;
        if(s[i] == 1) s1 = true;
    }

    rep(i,m){
        cin >> t[i];
        if(t[i] == 0) t0 = true;
        if(t[i] == 1) t1 = true;
    }

    if(t0 && (!s0)){
        cout << -1 << endl;
        return 0;
    }
    if(t1 && (!s1)){
        cout << -1 << endl;
        return 0;
    }

    int init = s[0];
    int small;      //かえるのん良必要yなシフト

    int ans = 0;
    int now = init;

    bool used = false;//変えた

    if(s1 && s0){
        for(int i=1; i<n; i++){
            if(s[i] != init || s[n-i] != init){
                small = i;
                break;
            }
        }

        if(init != t[0]){
            used = true;
            ans += small;
            now = t[0];
        }
        for(int i=0; i<m; i++){
            if(now != t[i]){
                if(used) ans++;
                else{
                    ans += small;
                    used = true;
                }
                now = t[i];
            }
            ans++;
        }
    }
    else{
        cout << m << endl;
        return 0; 
    }

    cout << ans << endl;

}