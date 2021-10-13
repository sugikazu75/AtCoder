#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    vector <ll> a(4);
    rep(i,4){
        cin >> a[i];
    }
    
    bool ok = false;
    for(int i=0; i<8; i++){
        ll eat = 0;
        ll neat = 0;
        bitset <4> s(i);
        for(int j=0; j<4; j++){
            if(s.test(j)){
                eat += a[j];
            }
            else{
                neat += a[j];
            }
        }
        if(eat == neat){
            ok = true;
        }
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}