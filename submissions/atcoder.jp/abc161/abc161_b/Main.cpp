#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n,m;
    cin >> n >> m;
    int cnt = 0;
    int sum = 0;
    vector <int> a(n);
    rep(i,n){
        cin >> a[i];
        sum +=  a[i];
    }
    rep(i,n){
        if(a[i]*4*m >= sum){
            cnt ++;
        }
    }
    if(cnt >= m) cout << "Yes" << endl;
    else cout << "No" << endl;
}