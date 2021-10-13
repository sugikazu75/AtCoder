#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n),b(n);
    ll suma = 0;
    ll sumb = 0;

    rep(i,n){
        cin >> a[i];
        suma += a[i];
    }
    rep(i,n){
        cin >> b[i];
        sumb += b[i];
    }

    if(sumb > suma){
        cout << -1 << endl;
        return 0;
    }

    vector <ll> amari(0), husoku(0);
    ll need = 0;
    rep(i,n){
        ll tmp = a[i] - b[i];
        if(tmp < 0){
            husoku.push_back(abs(tmp));
            need += abs(tmp);
        }
        if(tmp > 0){
            amari.push_back(abs(tmp));
        }
    }

    if(need == 0){
        cout << 0 << endl;
        return 0;
    }

    sort(all(amari));
    reverse(all(amari));
    int i;
    ll tmpsum = 0;
    for(i=0; i<amari.size(); i++){
        tmpsum += amari[i];
        if(tmpsum >= need){
            break;
        }
    }
    cout << i + 1 + husoku.size() << endl;    
}