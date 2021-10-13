#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n,m;
    cin >> n >> m;
    vector <int> room(n),res(m);
    rep(i,n) cin >> room[i];
    rep(i,m) cin >> res[i];

    sort(all(room));
    sort(all(res));
    reverse(all(room));
    reverse(all(res));

    bool ng = true;

    if(n < m){
        cout << "NO" << endl;
    }
    else{
        for(int i=0; i<m; i++){
            if(room[i] < res[i]){
                ng = false;
                break;
            }
        }

        if(ng) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}