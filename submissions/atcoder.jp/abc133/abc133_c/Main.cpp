#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    long l,r;
    cin >> l >> r;

    if((r-l)>2030){
        cout << 0 << endl;
    }

    else{
        vector <long> mod(r-l+1,0);
        for(int i=0; i<r-l+1; i++){
            mod[i] = (l+i)%2019;
        }

        sort(all(mod));

        int ans=4000;

        for(int i=0; i<r-l+1; i++){
            for(int j=0; j<r-l+1; j++){
                if(i!=j){
                    int tmp = (mod[i]*mod[j])%2019;
                    if(tmp < ans){
                        ans = tmp;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}