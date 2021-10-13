#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int h,w;
    cin >> h >> w;

    vector < vector <char> > table(h, vector<char> (w));
    rep(i,h){
        rep(j,w){
            cin >> table[i][j];
        }
    }

    int ans = 0;

    for(int i=0; i<=h-2; i++){//たて
        for(int j=0; j<w; j++){
            if(table[i][j]=='.' && table[i+1][j]=='.'){
                ans ++;
            }
        }
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<=w-2; j++){
            if(table[i][j]=='.' && table[i][j+1]=='.'){
                ans ++;
            }
        }
    }

    cout << ans << endl;
}