#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,m,t;
    cin  >> n >> m >> t;
    ll nowplace = 0;
    ll nowbattery = n;
    rep(i,m){
        ll a,b;
        cin >> a >> b;
        nowbattery = nowbattery - (a - nowplace);
        if(nowbattery <= 0){
            cout << "No" << endl;
            return 0;
        }
        else{
            nowbattery = min(n,nowbattery + (b-a));
        }
        nowplace = b;
    }
    
    if(t - nowplace < nowbattery){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}