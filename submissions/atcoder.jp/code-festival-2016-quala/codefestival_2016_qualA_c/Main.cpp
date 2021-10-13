#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    ll k;
    cin >> s >> k;

    string sample = "abcdefghijklmnopqrstuvwxyz";

    map <char, int> alpha_1;
    map <int, char> alpha_2;

    rep(i,26){
        alpha_1[sample[i]] = i;
        alpha_2[i] = sample[i];
    }

    ll used = 0;

    for(int i=0; i<s.size(); i++){
        if(used >= k) break;
        else{
            if(i == s.size()-1){
                ll tmp = (k - used) % 26;
                s[i] = alpha_2.at((alpha_1.at(s[i]) + tmp) % 26);
                used = k;
            }
            ll to_a = (26 - alpha_1.at(s[i])) % 26;
            if(used + to_a <= k){
                used = used + to_a;
                s[i] = 'a';
            }
        }

    }   
    cout << s << endl;
}