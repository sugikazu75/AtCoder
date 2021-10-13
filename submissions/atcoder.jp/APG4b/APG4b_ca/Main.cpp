#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    vector <int> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];

    vector <pair<int, int> > ans(n);

    rep(i,n) ans[i] = make_pair(b[i],a[i]);

    sort(ans.begin(), ans.end());

    vector <pair <int, int> > ans2(n);

    rep(i,n) ans2[i].first = ans[i].second, ans2[i].second = ans[i].first;

    rep(i,n) cout << ans2[i].first << " " << ans2[i].second << endl;
}
