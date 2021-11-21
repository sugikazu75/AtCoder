#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n, x;
    cin >> n >> x;

    vector <int> a(n);
    rep(i,n){
        int tmp;
        cin >> tmp;
        a[i] = tmp - 1;
    }

    vector <int> know(n, 0);

    queue <int> q;
    q.push(x-1);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        know[now] = 1;
        if(!know[a[now]]){
            q.push(a[now]);
        }
    }

    int ans = 0;
    rep(i,n){
        ans += know[i];
    }

    cout << ans << endl;
}