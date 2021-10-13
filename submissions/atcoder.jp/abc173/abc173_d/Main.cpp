#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n;
    cin >> n;
    vector <long long> a(n);
    rep(i,n) cin >> a[i];

    if(n == 2){
        cout << max(a[0], a[1]) << endl;
        return 0;
    }

    sort(all(a));
    reverse(all(a));

    long long ans = a[0];

    int set = (n-2)/2;
    int rem = (n-2)%2;
    for(int i=1; i<=set; i++){
        ans += 2 * a[i];
    }

    if(rem == 0);
    else{
        ans += a[set+1];
    }

    cout << ans << endl; 

}