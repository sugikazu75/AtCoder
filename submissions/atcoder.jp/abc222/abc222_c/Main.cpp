#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;
    vector <vector <char> > hand(2*n, vector <char>(m));
    rep(i, 2*n){
        string s;
        cin >> s;
        rep(j, m){
            hand[i][j] = s[j];
        }
    }

    vector <pair <int, int> > cnt(2 * n);   // win, index
    rep(i, 2 * n){
        cnt[i].first = 0;
        cnt[i].second = i;
    }

    
    rep(i, m){
        rep(j, n){
            char even = hand[cnt[2*j].second][i];
            char odd = hand[cnt[2*j+1].second][i];
            if(odd == 'G'){
                if(even == 'C') cnt[2*j+1].first--;
                if(even == 'P') cnt[2*j].first--;
            }
            if(odd == 'C'){
                if(even == 'P') cnt[2*j+1].first--;
                if(even == 'G') cnt[2*j].first--;
            }
            if(odd == 'P'){
                if(even == 'G') cnt[2*j+1].first--;
                if(even == 'C') cnt[2*j].first--;
            }
        }
        sort(all(cnt));
    }

    rep(i, 2*n){
        cout << cnt[i].second + 1 << endl;
    }

}