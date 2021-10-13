#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll q;
    cin >> q;
    ll now = 0;
    priority_queue <ll, vector <ll> , greater<ll> > que;
    rep(i,q){
        ll s;
        cin >> s;
        if(s == 1){
            ll x;
            cin >> x;
            que.push(x - now);
        }
        else if(s == 2){
            ll x;
            cin >> x;
            now += x;
        }
        else{
            ll tmp = que.top();
            que.pop();
            cout << tmp + now << endl;
        }
    }
}