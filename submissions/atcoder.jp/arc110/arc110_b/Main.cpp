#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    string t;
    cin >> t;

    if(t == "1"){
        cout << 20000000000 << endl;
        return 0;
    }

    if(t == "11"){
        cout << 10000000000 << endl;
        return 0;
    }
    bool find = false;
    ll init = 0;
    ll fin = 0;
    //最初の0
    for(ll i=0; i<n; i++){
        if(t[i] == '0'){
            init = i;
            find = true;
            break;
        }
    }
    //cout << init << endl;
    //最後の0
    for(int i=n-1; i>=0; i--){
        if(t[i] == '0'){
            fin = i;
            find = true;
            break;
        }
    }
    //cout << fin << endl;

    if(!find){
        cout << 0 << endl;
        return 0;
    }

    if(init > 2 || fin < n-3){
        cout << 0 << endl;
        return 0;
    }
    

    if((fin - init) % 3 != 0){
        cout << 0 << endl;
        return 0;
    }

    if(fin == init){
        if(fin == n-1){
            cout << 10000000000 << endl;
            return 0;
        }
        else{
            cout << 9999999999 << endl;
            return 0;

        }
    }

    else{
        for(int i=init+1; i<=fin; i++){
            if((i - (init+1)) % 3 == 2){
                if(t[i]!='0'){
                    cout << 0 << endl;
                    return 0;
                }
            }
            else{
                if(t[i]!='1'){
                    cout << 0 << endl;
                    return 0;
                }
            }
        }

        //問題なし
        ll tmp = (fin - init) / 3 + 1;
        if(fin == n-1){
            cout << 10000000000 - tmp + 1 << endl;
            return 0;
        }
        else{
            cout << 10000000000 - tmp << endl;
            return 0;
        }
    }
}