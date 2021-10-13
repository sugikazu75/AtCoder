#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    else if(n == 2){
        cout << 0 << endl;
        return 0;
    }
    else if(n == 3){
        cout << 1 << endl;
        return 0;
    }
    else{
        vector <long long> ans(n);
        ans[0] = 0;
        ans[1] = 0;
        ans[2] = 1;
        for(int i = 3; i<=n-1; i++){
            ans[i] = ans[i-1] + ans[i-2] + ans[i-3];
            ans[i] %= 10007;
        }
        cout << ans[n-1] % 10007 << endl;
        return 0;
    }
}