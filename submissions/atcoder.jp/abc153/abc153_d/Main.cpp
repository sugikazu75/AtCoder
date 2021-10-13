#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    long h;
    cin >> h;

    long count=1;
    long ans=0;
    while(h>=1){
        h /= 2;
        ans += count;
        count *= 2;
    }

    cout << ans << endl;
} 
