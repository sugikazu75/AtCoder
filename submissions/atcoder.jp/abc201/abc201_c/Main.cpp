#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    int o = 0;
    int x = 0;
    int u = 0;

    rep(i,s.size()){
        if(s[i] == 'o') o++;
        else if(s[i] == 'x') x++;
        else u++;
    }

    int u2 = u * u;
    int u3 = u2 * u;
    int u4 = u3 * u;

    if(o > 4){
        cout << 0 << endl;
        return 0;
    }

    if(o == 0) cout << u * u * u  * u << endl;
    else if(o == 1) cout << 1 + 4 * u + 6 * u2 + 4 * u3 << endl;
    else if(o ==2) cout << 14 + 4 * 6 * u + 12 * u2 << endl;
    else if(o == 3) cout << 3 * 6 * 2 + 4 * 6 * u << endl;
    else cout << 24 << endl;
}

