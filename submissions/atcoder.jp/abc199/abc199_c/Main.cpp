#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    vector <ll> t(q), a(q), b(q);
    rep(i,q) cin >> t[i] >> a[i] >> b[i];

    vector <char> ans(2*n);
    rep(i,2*n) ans[i] = s[i];

    int cnt = 0;
    rep(i,q){
        if(t[i] == 1){
            if(cnt % 2 != 0){
                if(a[i] <= n){
                    a[i] = a[i] + n;
                }
                else a[i] = a[i] - n;
                if(b[i] <= n){
                    b[i] = b[i] + n;
                }
                else b[i] = b[i] - n;
            }
        }
        else cnt++;
    }

    rep(i,q){
        if(t[i] == 1){
            char tmp = ans[a[i] - 1];
            ans[a[i]-1] = ans[b[i]-1];
            ans[b[i]-1] = tmp;
        }
    }

    if(cnt % 2 != 0){
        for(int i=n; i<2*n; i++){
            cout << ans[i];
        }        
        for(int i=0; i<n; i++){
            cout << ans[i];
        }
        cout << endl;
    }

    else{
        rep(i,2*n){
        cout << ans[i];
        }
        cout << endl;
    }
}