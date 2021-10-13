#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector <long> height (n);
    rep(i,n) cin >> height[i];

    if(n == 1) {
        cout << 0 << endl;
        return 0;
    }

    vector <int> compare(n-1,0);
    for(int i=0; i<n-1; i++){
        if(height[i] >= height[i+1]) compare[i]=1;
        else compare[i]=0;
    }
    int count =0;
    int ans=0;
    for(int i=0; i<n; i++){ 
        if(compare[i] == 1){
            count ++;
        }
        else{
            if(count > ans) ans = count;
            count =0;
        }
    }

    cout << ans << endl;
}
