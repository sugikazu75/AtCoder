#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    vector <int> a(3);
    rep(i,3) cin >> a[i];

    sort(all(a));
    if(a[1]-a[0] == a[2]-a[1]){
        cout << "Yes" << endl;
        return 0;
    }
    else{
        cout << "No" << endl;
        return 0;
    }

}