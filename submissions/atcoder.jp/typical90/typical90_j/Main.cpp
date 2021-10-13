#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <ll> suma(n,0), sumb(n,0);
    rep(i,n){
        int c,p;
        cin >> c >> p;
        if(i != 0){
            if(c == 1){
                suma[i] = suma[i-1] + p;
                sumb[i] = sumb[i-1];
            }
            else{
                suma[i] = suma[i-1];
                sumb[i] = sumb[i-1] + p;
            }
        }
        else{
            if(c == 1){
                suma[i] = p;
            }
            else{
                sumb[i] = p;
            }
        }
    }
    int q;
    cin >> q;
    rep(i,q){
        int l,r;
        cin >> l >> r;
        if(l == 1) cout << suma[r-1] << " " << sumb[r-1] << endl;
        else cout << suma[r-1] - suma[l-2] << " " << sumb[r-1] - sumb[l-2] << endl;
    }
} 
