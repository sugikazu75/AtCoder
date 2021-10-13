#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    string s;
    cin >> n >> s;
    
    vector <vector <int> > table(4,vector<int>(n));
    
    rep(i,4){//4n
        rep(j,n){
            table[i][j] = 0;
        }
    }

    if(s[0] == 'A') table[0][0] = 1;
    if(s[0] == 'T') table[1][0] = 1;
    if(s[0] == 'G') table[2][0] = 1;
    if(s[0] == 'C') table[3][0] = 1;

    if(n == 1){
        cout << 0 << endl;
        return 0;
    }

    for(int i=1; i<n; i++){//5n
        if(s[i] == 'A') table[0][i] = 1;
        if(s[i] == 'T') table[1][i] = 1;
        if(s[i] == 'G') table[2][i] = 1;
        if(s[i] == 'C') table[3][i] = 1;
        
        table[0][i] += table[0][i-1];
        table[1][i] += table[1][i-1];
        table[2][i] += table[2][i-1];
        table[3][i] += table[3][i-1];
    }

    int ans = 0;

    for(int i=1; i<=n; i++){//文字数//
        for(int j=0; j<=n-i; j++){//スタート位置
            int tmpa,tmpt,tmpg,tmpc;
            if(j == 0){
                tmpa = table[0][i-1];
                tmpt = table[1][i-1];
                tmpg = table[2][i-1];
                tmpc = table[3][i-1];
            }
            else{
                tmpa = table[0][j + i -1] - table[0][j-1];
                tmpt = table[1][j + i -1] - table[1][j-1];
                tmpg = table[2][j + i -1] - table[2][j-1];
                tmpc = table[3][j + i -1] - table[3][j-1];
            }

            if(tmpa == tmpt && tmpg == tmpc){
                ans ++;
            }
        }
    }

    cout << ans << endl;

}