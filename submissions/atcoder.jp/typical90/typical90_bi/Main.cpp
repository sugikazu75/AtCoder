#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll q;
    cin >> q;
    vector <ll> table(10000000);
    ll left  = 500000;
    ll right = 500001;
    rep(i,q){
        ll t,x;
        cin >> t >> x;
        if(t == 1){
            table[left] = x;
            left--;
        }
        else if(t == 2){
            table[right] = x;
            right++;
        }
        else{
            cout << table[left + x] << endl;
        }
    }
}

