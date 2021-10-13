#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <int> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];

    int ans = 5000000;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                    ans = min(ans , a[i] + b[i]);
            }
            else{
                ans = min(ans , max(a[i] , b[j]));
            }    
        }
    }
    cout << ans << endl;
    
}