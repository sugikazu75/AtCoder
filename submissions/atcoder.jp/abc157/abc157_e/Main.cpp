#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, q;
    string s;
    cin >> n >> s >> q;

    string sample = "abcdefghijklmnopqrstuvwxyz";

    map <char, int> alpha;
    rep(i,26) alpha[sample[i]] = i;
    
    vector <set <ll> > table(26);
    rep(i,26) table[i].clear();

    rep(i, n){
        char tmp = s[i];
        int index = alpha.at(tmp);
        table[index].insert(i);
    }

    // rep(i,26) cout << table[i].size() << endl;

    rep(i,q){
        int sign;
        cin >> sign;
        if(sign == 1){
            int index;
            char new_c, pre_c;
            cin >> index >> new_c;
            pre_c = s[index - 1];
            s[index - 1] = new_c;

            table[alpha.at(pre_c)].erase(index-1);
            table[alpha.at(new_c)].insert(index-1);
        }
        else{
            int l,r;
            cin >> l >> r;
            int ans = 0;
            for(int j=0; j<26; j++){
                auto ite = table[j].lower_bound(l-1);
                if(ite != table[j].end()){
                    if(*ite <= r-1){
                        ans++;
                    }
                }
            }
            cout << ans << endl;
        }
    }


}