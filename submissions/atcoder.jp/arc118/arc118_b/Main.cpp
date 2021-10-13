#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll k,n,m;
    cin >> k >> n >> m;
    vector <ll> a(k);
    rep(i,k) cin >> a[i];

    ll amari = m;
    vector <ll> b(k);
    rep(i,k){
        b[i] = a[i] * m / n;
        amari -= b[i];
    }

    //cout << amari << endl;
    vector <ll> sa_factor(0);


    priority_queue <ll, vector<ll>, greater<ll>> Sa_factor; 
    map <ll, queue<ll> > table;          // sa, queue of index

    for(ll i=0; i<k; i++){
        ll tmp = b[i] * n - a[i] * m;   //sa
        if(!table.count(tmp)) {
            table[tmp].push(i);
            Sa_factor.push(tmp);
            /*for(ll j=1; j<=100; j++){
                sa_factor.push_back(tmp + j * n);
            }*/
        }
        else{
            table.at(tmp).push(i);
        }
    }

    while(amari > 0){
        while(!table.at(Sa_factor.top()).empty() && amari > 0){
            ll now = table.at(Sa_factor.top()).front();
            b[now]++;
            table.at(Sa_factor.top()).pop();
            
            if(!table.count(Sa_factor.top() + n)){             //sonnzaisinai
                table[Sa_factor.top() + n].push(now);
                Sa_factor.push(Sa_factor.top() + n);
            }
            else{                                                   //sonnzaisuru                                  not shokenn
                table.at(Sa_factor.top() + n).push(now);
            }
            
            if(table.at(Sa_factor.top()).empty()){
                Sa_factor.pop();
            }
            amari--;
        }
    }
    
    rep(i,k){
        cout << b[i] << " ";
    }
    cout << endl;
}

