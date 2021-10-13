#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int h, w;
    cin >> h >> w;
    vector <vector <ll> > p(h, vector <ll>(w));

    rep(i,h){
        rep(j,w){
            cin >> p[i][j];
        }
    }

    ll ans = 0;
    for(ll num=0; num<(1 << h); num++){
        bitset<8> s(num);
        ll rows = 0;
        map <ll, ll> table;     //factor, cols_cnt
        vector <ll> factor(0);
        for(int i=0; i<h; i++) if(s.test(i)) rows++;
        if(rows == 0) continue;
        for(int j=0; j<w; j++){
            ll now_factor;
            bool ok = true;
            for(int i=0; i<h; i++){
                if(s.test(i)){
                    now_factor = p[i][j];
                    break;
                }
            }
            for(int i=0; i<h; i++){
                if(s.test(i)){
                    if(p[i][j] != now_factor) ok = false;
                }
            }
            if(ok){
                if(!table.count(now_factor)){
                    table[now_factor] = 1;
                    factor.push_back(now_factor);
                }
                else table.at(now_factor)++;
            }
        }

        if(factor.size() == 0) continue;
        
        priority_queue <ll> pq;
        rep(i, factor.size()){
            pq.push(table.at(factor[i]));
        }
        ans = max(ans, rows * pq.top());
    }

    cout << ans << endl;
}