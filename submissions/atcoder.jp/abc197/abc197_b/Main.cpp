#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int h,w,x,y;
    cin >> h >> w >> x >> y;
    vector <vector <char> > table(h, vector <char> (w));
    rep(i,h){
        string s;
        cin >> s;
        rep(j,w){
            table[i][j] = s[j];
        }
    }
    int ans = -3;
    for(int i=x-1; i<h; i++){
        if(table[i][y-1] == '#') break;
        else ans++;
    }
    for(int i=x-1; i>=0; i--){
        if(table[i][y-1] == '#') break;
        else ans++;
    }
    for(int i=y-1; i<w; i++){
        if(table[x-1][i] == '#') break;
        else ans++;
    }
    for(int i=y-1; i>=0; i--){
        if(table[x-1][i] == '#') break;
        else ans++;
    }

    cout << ans << endl;
} 
