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

    int ans = 0;

    for(int i=-102; i<=102; i++){
        int tmp = 0;
        rep(j,n){
            int tmp1;
            tmp1 = (a[j] - i) * (a[j] - i);
            tmp +=  tmp1;

        }
        if(i == -102){
            ans = tmp;
        }
        else{
            ans = min(ans, tmp);
        }
    }

    cout << ans << endl;
}
