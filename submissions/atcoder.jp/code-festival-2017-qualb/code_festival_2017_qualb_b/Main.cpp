#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    map <ll , ll> table;
    rep(i,n){
        ll d;
        cin >> d;
        if(table.count(d)) table.at(d)++;
        else table[d] = 1;
    }

    ll m;
    cin >> m;
    rep(i,m){
        ll t;
        cin >> t;
        if(table.count(t) && table.at(t)>0) table.at(t)--;
        else{
            cout << "NO" << endl;
            return 0;
        } 
    }
    cout << "YES" << endl;

}