#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n, m, k;
    cin >> n >> m;
    vector <int> a(m), b(m);
    rep(i,m) cin >> a[i] >> b[i];
    cin >> k;
    vector <int> c(k), d(k);
    rep(i,k){
        cin >> c[i] >> d[i];
    }

    int ans = 0;

    for(int i=0; i<(1<<16); i++){
        bitset <16> s(i);
        vector <int> dish(n,0);
        int now = 0;
        for(int j=0; j<k; j++){
            if(s.test(j)) dish[c[j] - 1]++;
            else dish[d[j] - 1]++;
        }

        for(int j=0; j<m; j++){
            if(dish[a[j] - 1] > 0 && dish[b[j] - 1]) now++;
        }

        ans = max(ans, now);
    }

    cout << ans << endl;
}