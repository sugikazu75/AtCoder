#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int sx , sy , tx , ty;
    cin >> sx >> sy >> tx >> ty;
    vector <char> ans(0);
    rep(i,ty-sy) ans.push_back('U');
    rep(i,tx-sx) ans.push_back('R');

    rep(i,ty-sy) ans.push_back('D');
    rep(i,tx-sx) ans.push_back('L');

    ans.push_back('L');
    rep(i,ty-sy+1) ans.push_back('U');
    rep(i,tx-sx+1) ans.push_back('R');
    ans.push_back('D');

    ans.push_back('R');
    rep(i,ty-sy+1) ans.push_back('D');
    rep(i,tx-sx+1) ans.push_back('L');
    ans.push_back('U');

    rep(i,ans.size()){
        cout << ans[i];
    }
    cout << endl;


}