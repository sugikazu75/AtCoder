#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll h, w;
    cin >> h >> w;

    vector < vector <char> > c(h, vector <char> (w));
    vector < vector <char> > d(h, vector <char> (w));

    rep(i,h){
        string s;
        cin >> s;
        rep(j,w){
            c[i][j] = s[j];
            d[i][j] = s[j];
        }
    }

    // rep(i, h){
    //     rep(j, w){
    //         cout << d[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            vector <int> ok(5, 1);
            if(d[i][j] == '.'){
                // cout << "aa" << endl;
                if(i != 0){
                    if(d[i-1][j] != '.'){
                        int tmp = d[i-1][j] - '0';
                        ok[tmp-1] = 0;
                    }
                }
                if(i != h-1){
                    if(d[i+1][j] != '.'){
                        int tmp = d[i+1][j] - '0';
                        ok[tmp-1] = 0;
                    }
                }
                if(j != 0){
                    if(d[i][j-1] != '.'){
                        int tmp = d[i][j-1] - '0';
                        ok[tmp-1] = 0;
                    }
                }
                if(j != w-1){
                    if(d[i][j+1] != '.'){
                        int tmp = d[i][j+1] - '0';
                        ok[tmp-1] = 0;
                    }
                }
                
                rep(k, 5){
                    if(ok[k]){
                        // cout << k << endl;
                        d[i][j] = (k + 1) + '0';
                    }
                }
            }
            else{
                d[i][j] = c[i][j];
            }
        }
    }

    rep(i, h){
        rep(j, w){
            cout << d[i][j];
        }
        cout << endl;
    }
}