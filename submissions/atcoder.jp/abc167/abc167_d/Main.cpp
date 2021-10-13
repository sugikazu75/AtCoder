#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,k;
    cin >> n >> k;

    vector <ll> a(n+1);
    rep(i,n){
        cin >> a[i+1];
    }

    vector <ll> visit(n+1,0);

    ll now = 1;
    visit[1] = 1;
    ll start;
    while(true){
        if(visit[a[now]] == 1){
            start = a[now];
            break;
        }
        else{
            visit[a[now]]++;
            now = a[now];
        }
    }

    vector <ll> pre;
    ll prev = 0;
    now = 1;
    while(true){
        if(now != start){
            prev++;
            pre.push_back(now);
            now = a[now];
        }
        else break;
    }

    now = start;
    vector <ll> loop;
    while(true){
        loop.push_back(now);
        if(a[now] == start) break;
        else{
            now = a[now];
        }
    }

    if(k >= prev){
        cout << loop[(k-prev)%loop.size()] << endl;
    }
    else{
        cout << pre[k] << endl;
    }
}
