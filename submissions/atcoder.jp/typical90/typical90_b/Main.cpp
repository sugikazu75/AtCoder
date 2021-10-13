#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;


int main(){
    int n;
    cin >> n;

    if(n % 2 == 1){
        return 0;
    }

    for(ll i=0; i<(1 << n); i++){
        bitset <20> s(i);
        ll cnt0 = 0;
        ll cnt1 = 0;
        bool ng = false;
        for(int j=0; j<n; j++){
            if(s.test(j)) cnt1++;
            else cnt0++;
            if(cnt0 > cnt1) ng = true;
        }
        if(ng) continue;

        if(cnt0 == n / 2){
            string ans = "";
            for(int j=0; j<n; j++){
                if(s.test(j)){
                    ans = ans + ")";
                }
                else ans = ans + "(";
            }
            reverse(all(ans));
            cout << ans << endl;
        }
    }
}