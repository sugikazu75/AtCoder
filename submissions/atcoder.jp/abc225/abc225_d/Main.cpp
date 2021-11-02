#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n, q;
    cin >> n >> q;

    vector <int> par(n), chi(n);
    rep(i, n){
        par[i] = i;
        chi[i] = i;
    }

    rep(i, q){
        int c;
        cin >> c;
        if(c == 1){
            int x, y;
            cin >> x >> y;
            chi[x-1] = y-1;
            par[y-1] = x-1;
        }
        if(c == 2){
            int x, y;
            cin >> x >> y;
            chi[x-1] = x-1;
            par[y-1] = y-1;
        }
        if(c == 3){
            int x;
            cin >> x;
            int tmp = x-1;
            vector <int> ans(0);
            ans.push_back(tmp);
            while(par[tmp] != tmp){
                ans.push_back(par[tmp]);
                tmp = par[tmp];
            }
            reverse(all(ans));
            tmp = x-1;
            while(chi[tmp] != tmp){
                ans.push_back(chi[tmp]);
                tmp = chi[tmp];
            }

            cout << ans.size() << " ";
            rep(j, ans.size()){
                cout << ans[j] + 1 << " ";
            }
            cout << endl;
        }
    }
}