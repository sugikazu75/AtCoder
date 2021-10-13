#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <int> h(n);
    rep(i,n){
        cin >> h[i];
    }

    vector <int> now(n,0);
    int ans = 0;
    int left = 0;

    while(left < n){
        while(now[left] == h[left]) left++;
        int right = 200;
        bool find = false;
        bool did = false;
        for(int i=left; i<n; i++){
            if(now[i] == h[i] && (!find)){
                right = i;
                find = true;
                break;
            }
        }

        if(find){
            for(int i=left; i<right; i++){
                now[i]++;
                did = true;    
            }
        }
        else{
            for(int i=left; i<n; i++){
                now[i]++;
                did = true;
            }
        }

        while(now[left] == h[left]) left++;
        if(did) ans++;
    }

    cout << ans << endl;
}
