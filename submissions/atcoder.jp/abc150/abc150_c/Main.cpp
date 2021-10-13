#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector <int> p(n), q(n);
    rep(i,n) cin >> p[i];
    rep(i,n) cin >> q[i];

    int counta=0;
    int countb=0;

    vector <int> nums(n);
    iota(all(nums),1);

    
    int count=0;

    do{
        bool oka = true;
        bool okb = true;
        for(int i=0; i<n; i++){
            if(nums[i] != p[i]) {
                oka = false;
            }
            if(nums[i] != q[i]){
                okb = false;
            }
        }
        if(oka) counta = count;
        if(okb) countb = count;
        count ++;
    }while(next_permutation(all(nums)));

    cout << abs(counta - countb) << endl;
}
