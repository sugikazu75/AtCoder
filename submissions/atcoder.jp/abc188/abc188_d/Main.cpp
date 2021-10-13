#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,cost;
    cin >> n >> cost;

    vector <ll> A(n),B(n),C(n);
    vector <bool> eventflag(1000000010, false);
    map <ll,ll> d;

    rep(i,n){
        ll a,b,c;
        cin >> a >> b >> c;
        A[i] = a;
        B[i] = b;
        C[i] = c;

        if(!d.count(a)) d[a] = c;
        else d.at(a) += c;

        if(!d.count(b+1)) d[b+1] = -c;
        else d.at(b+1) -= c;
        
    } 

    vector <ll> eventfactor(0);
    for(ll i=0; i<n; i++){
        ll tmp = A[i];
        if(!eventflag[tmp]){
            eventflag[tmp] = true;
            eventfactor.push_back(tmp);
        }
    }
    for(ll i=0; i<n; i++){
        ll tmp = B[i];
        if(!eventflag[tmp+1]){
            eventflag[tmp+1] = true;
            eventfactor.push_back(tmp+1);
        }
    }

    sort(all(eventfactor));
    ll nowcost = 0;
    ll ans = 0;
    for(ll i=0; i<eventfactor.size()-1; i++){
        nowcost = nowcost + d.at(eventfactor[i]);
        ans += min(cost, nowcost) * (eventfactor[i+1] - eventfactor[i]);
    }

    cout << ans << endl;

    
}
