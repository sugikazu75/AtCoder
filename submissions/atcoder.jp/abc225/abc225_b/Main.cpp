#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <ll> cnt(n, 0);
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        cnt[a-1]++;
        cnt[b-1]++;
    }

    sort(all(cnt));
    if(cnt[n-1] == n-1) cout << "Yes" << endl;
    else cout << "No" << endl;
}