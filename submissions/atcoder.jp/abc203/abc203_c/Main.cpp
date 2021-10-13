#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,k;
    cin >> n >> k;

    map <ll, ll> cost;

    priority_queue <ll, vector <ll> , greater<ll> > factor;

    rep(i,n){
        ll a,b;
        cin >> a >> b;
        if(!cost.count(a)){
            cost[a] = b;
            factor.push(a);

        }
        else{
            cost.at(a) += b;
        }
    }

    ll now = k;
    while(now >= factor.top() && !factor.empty()){
        now += cost.at(factor.top());
        factor.pop();
    }

    cout << now << endl;

}

