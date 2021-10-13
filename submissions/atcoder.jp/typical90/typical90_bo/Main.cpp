#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

string func(string x){
    ll n = x.size();
    unsigned long long sum8 = 0;
    unsigned long long now8 = 1;
    for(ll i=n-1; i>=0; i--){
        long long tmp = x[i] - '0';
        sum8 += now8 * tmp;
        now8 *= 8;
    }

    string nine = "";
    while(sum8 > 0){
        nine = to_string(sum8 % 9) + nine;
        sum8 /= 9;
    }
    
    for(int i=0; i<nine.size(); i++){
        if(nine[i] == '8') nine[i] = '5';
    }

    return nine;
}

int main(){
    string n;
    ll k;
    cin >> n >> k;

    if(n == "0"){
        cout << 0 << endl;
        return 0;
    }
    
    rep(i,k){
        n = func(n);
    }

    cout << n << endl;
}