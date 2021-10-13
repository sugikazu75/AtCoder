#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    long long n,k;
    cin >> n >> k;
    vector <long long> a(n);
    rep(i,n) cin >> a[i];

    vector <long long> b(n);
    long long tmp = 0;
    for(int i=0; i<n; i++){
        b[i] = tmp + a[i];
        tmp = tmp + a[i];
    }

    long long ans = 0;
    for(int i=0; i<n; i++){
        if(b[i] >= k){
            ans += n - i;
            break;
        }
    }

    for(int i=0; i<n-1; i++){
        long long ng = i;
        long long ok = n;
        while(abs(ng - ok) > 1){
            long long mid = (ok + ng)  / 2;
            if((b[mid] - b[i]) >= k){
                ok  = mid;
            }
            else{
                ng = mid;
            }
        }
        if(ng >= n-1);
        else{
            ans += n - ok;
        }
    }

    cout << ans << endl; 

}