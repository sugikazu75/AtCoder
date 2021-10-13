#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector <int> k(n-1);
    rep(i,n-1){
        cin >> k[i];
    }

    if(n==2){
        cout << k[0] << " " << k[0] << endl;
        return 0;
    }

    vector <int> l(n);
    for(int i=1; i<=n-2; i++){
        l[i] = min(k[i-1], k[i]);
    }
    l[0] = k[0];
    l[n-1] = k[n-2];

    rep(i,n){
        if(i==n-1){
            cout << l[i] << endl;
        }
        else{
            cout << l[i] << " ";
        }
    }

}