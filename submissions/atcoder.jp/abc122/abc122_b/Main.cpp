#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    for(int l=0; l<=n; l++){
        for(int r=0; r<=n; r++){
            int tmpans;
            bool ok = true;
            if(l+r >= n) tmpans = 0;
            else{
                for(int i=l; i<n-r; i++){
                    if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T');                    
                    else{
                        ok = false;
                        break;
                    }
                }
                if(ok) tmpans = n - l - r;
            } 
            ans = max(ans, tmpans);
        }
    }
    cout << ans << endl;
}