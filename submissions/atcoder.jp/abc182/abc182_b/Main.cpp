#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;

    vector <int> a(n);
    rep(i,n){
        cin >> a[i];
    }

    sort(all(a));
    int m = a[n-1];

    int ans = 0;
    int gcd = 0;


    for(int i=2; i<=m; i++){
        int tmp = 0;
        rep(j,n){
            if(a[j] % i == 0){
                tmp ++;
            }
        }
        if(tmp > ans){
            ans = tmp;
            gcd = i;
        }
    }

    cout << gcd << endl;
}
