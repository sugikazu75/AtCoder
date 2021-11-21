#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> p(n,0), q(n);
    rep(i,n){
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        p[i] = p1 + p2 + p3;
        q[i] = p[i];
    }

    sort(all(q));
    reverse(all(q));
    int b = q[k-1];

    for(int i=0; i<n; i++){
        if(b - p[i] > 300) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    
}