#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;

    vector <long> spot(n);
    rep(i,n) cin >> spot[i];

    vector <long> ans(n,0);

    long sum=abs(spot[0]);
    for(int i=0; i<=n-2; i++){
        sum += abs(spot[i+1]-spot[i]);
    }
    sum += abs(spot[n-1]);


    for(int i=0; i<n; i++){
        if(i==0){
            ans[0] = sum - abs(spot[0]) - abs(spot[1] - spot[0]) + abs(spot[1]);
        }
        else if(i==n-1){
            ans[n-1] = sum - abs(spot[n-1]) - abs(spot[n-1]-spot[n-2]) + abs(spot[n-2]);
        }
        else{
            ans[i] = sum - abs(spot[i]-spot[i-1]) - abs(spot[i+1]-spot[i]) + abs(spot[i+1]-spot[i-1]);
        }
    }

    rep(i,n) cout << ans[i] << endl;
}