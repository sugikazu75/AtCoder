#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,h;
    cin >> n >> h;
    vector <ll> a(n) , b(n);
    rep(i,n) cin >> a[i] >> b[i];
    ll maxa = 0;
    ll maxa_index = 0;
    rep(i,n){
        if(a[i] > maxa){
            maxa = a[i];
            maxa_index = i;
        }
    }

    vector <ll> largeb(0);
    ll sumlargeb = 0;
    rep(i,n){
        if(i == maxa_index);
        else{
            if(b[i] >= maxa){
                largeb.push_back(b[i]);
                sumlargeb += b[i];
            }
        }
    }

    sort(all(largeb));
    reverse(all(largeb));
    /*if(b[maxa_index] >= h){
        cout << 1 << endl;
        return 0;
    }*/
    ll sum = 0;
    ll cnt = 0;
    if(sumlargeb < h){
        cout <<  largeb.size() + (h - sumlargeb - b[maxa_index] + maxa - 1) / maxa + 1 << endl;
    }
    else{
        ll tmp = 0;
        rep(i,largeb.size()){
            if(tmp + b[maxa_index] >= h){
                cout << i+1 << endl;
                return 0;
            }
            else{
                tmp += largeb[i];
                if(tmp >= h){
                    cout << i+1 << endl;
                    return 0;
                }
            }
        }
    }
}