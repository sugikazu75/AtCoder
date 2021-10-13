#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    bool ok = true;

    rep(i,n){
        int a;
        cin >>a;
        if(a % 2 == 0){
            if(a%3!=0 && a%5!=0){
                ok = false;
            }
        }
    }
    if(ok) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;
}