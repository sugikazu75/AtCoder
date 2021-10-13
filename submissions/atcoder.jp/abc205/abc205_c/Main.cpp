#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll a,b,c;
    cin >> a >> b >> c;

    if(c % 2 == 0){
        if(abs(a) > abs(b)) cout << '>' << endl;
        else if(abs(a) < abs(b)) cout << '<' << endl;
        else cout << '=' << endl;
    }
    else{
        //同ふごう
        if(a == b) cout << '=' << endl;
        else{
            if(a >= 0 && b >= 0){
                if(a > b) cout << '>' << endl;
                else cout << '<' << endl;    
            }
            else if(a >= 0 && b < 0) cout << '>' << endl;
            else if(a < 0 && b >= 0) cout << '<' << endl;
            else{
                if(abs(a) < abs(b)) cout << '<' << endl;
                else cout << '>' << endl;
            }
        }

    }
}