#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <string> s(n);
    rep(i,n){
        cin >> s[i];
    }

    vector <ll> possible(n+1,0);//x[i]を1にする方法
    vector <ll> impossible(n+1,0);//x[]を0にする方法

    possible[0] = 1;
    impossible[0] = 1;

    ll jou2 = 2;
    for(int i=0; i<n; i++){
        jou2 *= 2;
        if(s[i] == "AND"){
            possible[i+1] = possible[i];
            impossible[i+1] = 2 * impossible[i] + possible[i];
        }
        if(s[i] == "OR"){
            possible[i+1] = impossible[i] + 2 * possible[i];
            impossible[i+1] = impossible[i];
        }
    }

    cout << possible[n] << endl;


}