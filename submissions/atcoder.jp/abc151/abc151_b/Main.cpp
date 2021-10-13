#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,k,m;
    cin >> n >> k >> m;

    int sum = 0;
    rep(i,n-1){
        int a;
        cin >> a;
        sum += a;
    }
    
    int need = n * m - sum;

    if(need > k){
        cout << -1 << endl;
    }
    else{
        if(need < 0) cout << 0 << endl;
        else cout << need << endl;
    }
}