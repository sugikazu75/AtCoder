#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n;
    cin >> n;
    vector <long long> a(n);
    rep(i,n) cin >> a[i];
    int cur = 0;
    long long money = 1000;
    while(cur < n-1){
        if(a[cur] < a[cur+1]){
            money = money - (money/a[cur])*a[cur] + (money/a[cur])*a[cur+1];
            cur ++;
        }
        else cur ++;
    }
    cout << money << endl;
}
