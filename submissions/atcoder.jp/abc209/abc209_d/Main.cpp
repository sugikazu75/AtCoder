#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

long long N = 100009;                                //node        
long long dist[100009];
vector <pair <ll, long long> > G[100009];           //G[i] = pair(iからいけるnode, そのcost) の配列

void dijkstra(int start){
    priority_queue <pair<long long, ll> ,vector<pair<long long, ll>>, greater<pair<long long, ll>>> Q;      
    /*{cost,node}   priority_queue <class T, class Container, class Compare>    小さい順にする*/
    for(int i=0; i<N; i++) dist[i] = (1LL << 60);
    dist[start] = 0;
    Q.push(make_pair(0,start));

    while(!Q.empty()){
        int from = Q.top().second;                   //fromからいけるところを調べる
        Q.pop();
        for(int i=0; i<G[from].size(); i++){
            int to = G[from][i].first;
            long long cost = G[from][i].second;
            if(dist[to] > dist[from] + cost){
                dist[to] = dist[from] + cost;
                Q.push(make_pair(dist[to], to));
            }
        }
    }
}


int main(){
    ll n, q;
    cin >> n >> q;
    rep(i, n-1){
        ll a, b;
        cin >> a >> b;
        G[a - 1].push_back(make_pair(b - 1, 1));
        G[b - 1].push_back(make_pair(a - 1, 1));
    }

    dijkstra(0);

    rep(i,q){
        ll c, d;
        cin >> c >> d;
        if((dist[c - 1] + dist[d - 1]) % 2 == 0) cout << "Town" << endl;
        else cout << "Road" << endl;
    }

}
    
