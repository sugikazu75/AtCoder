#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,k;
    cin >> n >> k;
    vector <vector <int> > t(n, vector <int> (n));
    rep(i,n){
        rep(j,n){
            cin >> t[i][j];
        }
    }

    vector <int> v(n-1);
    rep(i,n-1) v[i] = i+1;//1,2,3,...n-1

    int ans = 0;
    int cnt = 0;
    
    do {
        int now = 0;
        int tmp = 0;
        int next = v[0];
        for(int i=1; i<n-1; i++){
            tmp += t[now][next];
            now = next;
            next = v[i];
        }
        tmp += t[now][next];
        tmp += t[next][0];
        cnt++;

        if(tmp == k) ans++;
    }
    while (next_permutation(v.begin(), v.end()));//vを次の順列に

    cout << ans << endl;
    //cout << cnt << endl;
}