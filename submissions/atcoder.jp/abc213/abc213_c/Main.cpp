#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll h, w;
    cin >> h >> w;
    int n;
    cin >> n;

    priority_queue <ll, vector <ll>, greater<ll> > pq_h, pq_w;
    map <ll, ll> ex_h, ex_w;

    map <int, pair<ll, ll> > point;

    rep(i,n){
        ll a, b;
        cin >> a >> b;
        point[i] = {a - 1, b - 1};

        if(!ex_h.count(a - 1)){
            pq_h.push(a - 1);
            ex_h[a - 1] = 1;
        }
        if(!ex_w.count(b - 1)){
            pq_w.push(b - 1);
            ex_w[b - 1] =  1;   
        }
    }

    map <ll, ll> table_h, table_w;

    int cnt = 1;
    while(!pq_h.empty()){
        table_h[pq_h.top()] = cnt;
        //cout << pq_h.top() << " ";
        pq_h.pop();
        cnt++;
    }
    //cout << endl;
    
    cnt = 1;
    while(!pq_w.empty()){
        table_w[pq_w.top()] = cnt;
        //cout << pq_w.top() << " ";
        pq_w.pop();
        cnt++;
    }
    //cout << endl;

    rep(i, n){
        int a = point[i].first;
        int b = point[i].second;
        cout << table_h.at(a) << " " << table_w.at(b) << endl;
    }

}