#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int now = 0;
    vector <int> d1(n),d2(n);
    rep(i,n){
        cin >> d1[i] >> d2[i];
    }
    rep(i,n){
        if(d1[i] == d2[i]) now++;
        else now = 0;

        if(now >= 3){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}