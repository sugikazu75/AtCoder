#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int h,w,k;
    cin >> h >> w >> k;

    vector <string> S(h);

    for(int i=0; i<h; i++){
        cin >> S[i];
    }

    int ans = 0;

    for(int i=0; i < (1<<h); i++){
        for(int j=0; j< (1<<w); j++){
            int cntij = 0;
            bitset <6> hei(i);
            bitset <6> lin(j);
            for(int m=0; m<h; m++){
                for(int n=0; n<w; n++){
                    if( (hei.test(m)) && (lin.test(n)) && (S.at(m).at(n) == '#') ){
                        cntij ++;
                    }
                }
            }

            if(cntij == k){
                ans ++;
            }

        }
    }

    cout << ans << endl;

}