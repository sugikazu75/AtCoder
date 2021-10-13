#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    ll MAX = 1;
    rep(i,n){
        MAX *= 2;
    }

    ll maxpre = 0;
    int prenum;
    ll maxaft = 0;
    int aftnum;
    rep(i,MAX/2){
        ll a;
        cin >> a;
        if(a > maxpre){
            maxpre = a;
            prenum = i+1;
        }
    }
    rep(i,MAX/2){
        ll b;
        cin >> b;
        if(b > maxaft){
            maxaft = b;
            aftnum = i + MAX/2 + 1;
        }
    }

    if(maxpre > maxaft) cout << aftnum << endl;
    else cout << prenum << endl;
}
