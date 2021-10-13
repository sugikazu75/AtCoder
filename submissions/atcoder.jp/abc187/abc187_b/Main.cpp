#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <double> x(n),y(n);
    rep(i,n){
        cin >> x[i] >> y[i];
    }
    int ans = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(abs((y[i]-y[j]) / (x[i] - x[j])) <= 1){
                ans++;
            }
        }
    }
    cout << ans << endl;
}
