#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    rep(i,n) cin >> a[i];

    int p=max(a[0], a[1]);
    int s=min(a[0], a[1]);
    if(n == 2){
        cout << a[1] << endl;
        cout << a[0] << endl;
        return 0;
    }

    for(int i=2; i<n; i++){
        if(a[i] >= p){
            s = p;
            p = a[i];
        }

        else if (a[i] > s){
            s = a[i];
        }
    }

    vector <int> ans(n);
    rep(i,n){
        if(a[i] == p) ans[i] = s;
        else ans[i] = p;
    }

    rep(i,n){
        cout << ans[i] << endl;
    }

}
