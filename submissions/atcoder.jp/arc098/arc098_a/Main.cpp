#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector <int> se(n+1,0),sw(n+1,0);
    int tmpe = 0, tmpw = 0;
    rep(i,n){
        if(s[i] == 'E') tmpe ++;
        else tmpw ++;
        se[i+1] = tmpe;
        sw[i+1] = tmpw;
    }

    int ans = min((se[n]-se[1]),sw[n-1]);
    if(n==2){
        cout << ans << endl;
        return 0;
    }

    for(int i=1; i<=n-2; i++){
        int tmp = sw[i] + (se[n]-se[i+1]);
        if(tmp < ans){
            ans = tmp;
        }
    }
    cout << ans << endl;

}