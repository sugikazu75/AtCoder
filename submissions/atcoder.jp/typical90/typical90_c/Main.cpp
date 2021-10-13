#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;


int main(){
    int n;
    cin >> n;
    vector <int> a(n-1),b(n-1);
    rep(i,n-1) cin >> a[i] >> b[i];
    vector <vector <int> > path(n, vector<int> (0));
    rep(i,n-1){
        path[a[i] - 1].push_back(b[i] - 1);
        path[b[i] - 1].push_back(a[i] - 1);
    }

    vector <bool> visit(n,false);
    vector <int> depth0(n, 0);
    visit[0] = true;
    depth0[0] = 0;
    queue <int> q;
    q.push(0);
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int x:path[tmp]){
            if(!visit[x]){
                q.push(x);
                depth0[x] = depth0[tmp] + 1;
                visit[x] = true;
            }
        }
    }

    int depthmax = 0;
    int deepest;
    rep(i,n){
        if(depth0[i] > depthmax){
            depthmax = depth0[i];
            deepest = i;
        }
    }

    rep(i,n){
        visit[i] = false;
        depth0[i] = 0;
    }
    depth0[deepest] = 0;
    visit[deepest] = true;
    q.push(deepest);
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int x:path[tmp]){
            if(!visit[x]){
                q.push(x);
                depth0[x] = depth0[tmp] + 1;
                visit[x] = true;
            }
        }
    }
    depthmax = 0;
    rep(i,n){
        if(depth0[i] > depthmax){
            depthmax = depth0[i];
            deepest = i;
        }
    }
    cout << depthmax + 1 << endl;

}
