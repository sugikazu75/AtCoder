#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    string s;
    cin >> n;
    cin >> s;

    ll red =0, green = 0, blue = 0;

    rep(i,n){
        if(s[i] == 'R') red++;
        else if(s[i] == 'G') green++;
        else blue++;
    }

    ll ans = red * green * blue;
    
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            if(i == j) break;
            int k;
            if(j<2*j-i && 2*j-i<n){
                k = 2*j - i;
            }
            else break;

            if(s[i]!=s[j] && s[i]!=s[k] && s[j]!=s[k]) ans--;
        }
    }

    
    cout << ans << endl;
}

