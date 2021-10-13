#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <vector <int> > cnt(1002, vector <int> (1002,0));
    rep(i,n){
        int lx,ly,rx,ry;
        cin >> lx >> ly >> rx >> ry;
        cnt[lx][ly]++;
        cnt[lx][ry]--;
        cnt[rx][ly]--;
        cnt[rx][ry]++;

    }
    for(int i=0; i<1001; i++){
        for(int j=0; j<1001; j++){
            cnt[i][j+1] += cnt[i][j];
        }
    }
    for(int j=0; j<1001; j++){
        for(int i=0; i<1001; i++){
            cnt[i+1][j] += cnt[i][j];
        }
    }
    vector <int> ans(n+1,0);
    rep(i,1002){
        rep(j,1002){
            ans[cnt[i][j]]++;
        }
    }
    rep(i,n){
        cout << ans[i+1] << endl;
    }
}
