#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;


int main(){
    ll n,l;
    cin >> n >> l;
    ll k;
    cin >> k;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];

    ll left = 0;    //最小値の最大
    ll right = l;   //実現できない
    ll mid;
    while(abs(left - right) > 1){
        //全ピースmid以上が可能か？
        mid = (left + right) / 2;
        //できるだけきる。k回より多くきれるなら実現可能
        ll now = 0;
        ll cnt = 0;
        for(int i=0; i<n; i++){
            //きれるからきる
                if(a[i] - now >= mid && l - a[i] >= mid){
                    now = a[i];
                    cnt++;
                }
            
        }
        if(cnt >= k) left = mid;    //k回以上切っても実現可能
        else right = mid;
    }

    cout << left << endl;
    //cout << right << endl;
}
