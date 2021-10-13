#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,x;
    cin >> n >> x;

    ll sum = 0;
    rep(i,n){
        int a;
        cin >> a;
        sum += a;
        if(i % 2 == 1){
            sum--;
        }
    }

    if(sum <= x) cout << "Yes" << endl;
    else cout << "No" << endl;
}
    
