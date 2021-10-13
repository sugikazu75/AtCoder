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

    sort(all(a));

    ll b = a[n-1];

    ll ideal1,ideal2;
    if(b % 2 == 0){
        ideal1 = b / 2;
        ideal2 = b / 2;
    }
    else{
        ideal1 = b / 2;
        ideal2 = b / 2 + 1;
    }

    ll dif = 10000000000;

    ll ans1;
    ll ans2 = b;

    for(int i=0; i<n; i++){
        if(min(abs(ideal1 - a[i]), abs(ideal2 - a[i])) < dif){
            dif = min(abs(ideal1 - a[i]), abs(ideal2 - a[i]));
            ans1 = a[i];
        }
    }

    cout << ans2 <<  " " << ans1 << endl;
}