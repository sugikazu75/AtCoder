#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <int> p(n);
    vector <int> exist(200100,0);
    rep(i,n){
        cin >> p[i];
    }

    int cur = 0;
    rep(i,n){
        exist[p[i]] = 1;    //フラグ
        while(exist[cur] == 1){
            cur ++;
        }
        cout << cur << endl;
    }
}