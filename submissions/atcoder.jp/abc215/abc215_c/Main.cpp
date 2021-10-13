#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    ll k;
    cin >> s >> k;

    vector <char> v(s.size());
    rep(i, s.size()){
        v[i] = s[i];
    }

    sort(all(v));

    ll cnt = 1;

    do{
        if(cnt == k){
            rep(i,s.size()){
                cout << v[i];
            }
            cout << endl;
        }
        cnt++;
    } while(next_permutation(v.begin(), v.end()));
}