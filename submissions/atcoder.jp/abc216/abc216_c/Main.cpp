#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    vector<char> ans(0);
    while(n > 0){
        if(n % 2 == 0){
            ans.push_back('B');
            n /= 2;
        }
        else{
            ans.push_back('A');
            n--;
        }
    }

    reverse(all(ans));

    rep(i,ans.size()){
        cout << ans[i];
    }
    cout << endl;
}
