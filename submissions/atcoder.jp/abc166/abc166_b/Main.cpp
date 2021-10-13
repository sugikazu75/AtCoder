#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n,k;
    cin >> n >> k;

    vector <bool> item(n,true);
    rep(i,k){
        int d;
        cin >> d;
        rep(j,d){
            int a;
            cin >> a;
            item[a-1] = false;
        }
    }

    int ans;
    for(auto x:item){
        if(x){
            ans++;
        }
    }
    cout << ans << endl;
}