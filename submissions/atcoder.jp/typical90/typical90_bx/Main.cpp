#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll sum = 0;
    vector <ll> a(n);
    rep(i,n){
        cin >> a[i];
        sum += a[i];
    }

    if(sum % 10 != 0){
        cout << "No" << endl;
        return 0;
    }

    vector <ll> large(2 * n);
    rep(i,n){
        large[i] = a[i];
        large[i + n] = a[i];
    }

    ll start = 0;
    ll goal = 0;
    ll now = a[0];
    while(start <= n){
        if(now < sum / 10){
            goal++;
            now+=large[goal];
        }
        else if(now > sum / 10){
            now -= large[start];
            start++;
        }
        else{
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}