#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

ll func(ll x){
    ll sum = x;
    while(x > 0){
        sum += x % 10;
        x /= 10;
    }

    return sum % 100000;
}

int main(){
    ll n, k;
    cin >> n >> k;

    queue <ll> q;
    vector <ll> visit(100000, 0);

    rep(i,k+1){
        visit[n] = 1;
        q.push(n);
        n = func(n);
        if(visit[n]) break;
    }

    vector <ll> pre_factor(0);
    vector <ll> loop_factor(0);
    ll pre = 0;
    while(!q.empty() && q.front() != n){
        pre_factor.push_back(q.front());
        q.pop();
    }

    while(!q.empty()){
        loop_factor.push_back(q.front());
        q.pop();
    }

    if(k < pre_factor.size()){
        cout << pre_factor[k] << endl;
    }
    else{
        cout << loop_factor[(k - pre_factor.size()) % loop_factor.size()] << endl;
    }
}