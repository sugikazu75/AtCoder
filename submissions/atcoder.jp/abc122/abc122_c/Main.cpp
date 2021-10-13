#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector <int> l(q), r(q); 
    rep(i,q){
        cin >> l[i] >> r[i];
    }

    vector <int> ac(n,0);
    for(int i=0; i<n-1; i++){
        if(s[i] == 'A' && s[i+1] == 'C'){
            ac[i] += 1;
            ac[i+1] += 1;
        }
    }

    for(int i=1; i<n; i++){
        ac[i] += ac[i-1];
    }

/*
    rep(i,n){
        cout << ac[i];
    }
    cout << endl;
*/

    int ac_tot = ac[n-1] / 2;

    rep(i,q){
        int tmp;
        tmp = ac[r[i] - 1];

        if(l[i] - 1 == 0){
            cout << tmp / 2 << endl;
        }
        else{
            int pre;
            pre = ac[l[i] - 2] / 2;
            if(ac[l[i] - 2]  % 2 == 1) cout << tmp / 2 - pre - 1 << endl;
            else cout << tmp / 2 - pre << endl; 

        }

        
    }



}