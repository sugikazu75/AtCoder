#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll k;
    cin >> k;
    string s,t;
    cin >> s >> t;

    map <ll, ll> a;
    map <ll, ll> b;
    vector <ll> cnt(10,0);

    for(ll i=1; i<=9; i++){
        a[i] = 0;
        b[i] = 0;
    }
    rep(i,4){
        ll tmpa = s[i] - '0';
        ll tmpb = t[i] - '0';
        //cout << tmpa << " " << tmpb  <<endl;
        cnt[tmpa]++;
        cnt[tmpb]++;
        a.at(tmpa)++;
        b.at(tmpb)++;
    }
    ll d = 0, n = 0;
    for(ll i=1;i<=9;i++){
        for(ll j=1;j<=9;j++){
            if(i==j){
                if(k - cnt[i] < 2) continue;
            } 
            else{
                if(k - cnt[i] < 1  || k - cnt[j] < 1) continue;
            }

            //cout << "ok ";
            a.at(i)++;
            b.at(j)++;

            ll pointa = 0;
            ll pointb = 0;
            for(ll m=1; m<=9; m++){
                pointa += m * pow(10, a.at(m));
                pointb += m * pow(10, b.at(m));
            }
            //cout <<  pointa << " " <<pointb<< " ";
            ll tmp;
            if(i==j){
                tmp = (k-cnt[i]) * (k - cnt[i] - 1);
            }
            else tmp  = (k-cnt[i]) * (k - cnt[j]);
            //cout <<  i << " " <<j << " "<<  tmp << endl;
            n += tmp;
            if(pointa > pointb) {
                d += tmp;
                //cout <<  "win";
            }
            a.at(i)--;
            b.at(j)--;
        }
    }
    //cout << n << endl;
    //cout << d << endl;
    cout << setprecision(15);
    cout << (long double)d / (long double)n <<endl;
    
}