#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,m;
    cin >> n >> m;

    vector <ll> p(m), y(m);
    vector <vector <ll> > table(n);
    
    rep(i,m){
        cin >> p[i] >> y[i];
        table[p[i]-1].push_back(y[i]);
    }

    rep(i,n){
        sort(all(table[i]));
    }

    map <pair <ll , ll> , ll> jun;
    rep(i,n){
        rep(j,table[i].size()){
            jun[{i , table[i][j]}] = j+1;
        }
    }

    rep(i,m){
        string tmpp = to_string(p[i]);
        string tmpy = to_string(y[i]);
        string tmpjun = to_string(jun.at({p[i]-1 , y[i]}));

        reverse(all(tmpp));
        reverse(all(tmpjun));
        while(tmpp.size() < 6){
            tmpp += '0';
        }
        while(tmpjun.size() < 6){
            tmpjun += '0';
        }
        reverse(all(tmpp));
        reverse(all(tmpjun));
        cout << tmpp + tmpjun << endl;
    }

}