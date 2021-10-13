#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n){
        cin >> a[i];
    }

    vector <pair <ll, int> > table(n);
    rep(i,n){
        table[i] = make_pair(a[i], i);
    }

    sort(all(table));
    reverse(all(table));

    cout << table[1].second + 1 << endl;
}