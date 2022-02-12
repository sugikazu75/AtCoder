#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;

    if(n >= 42){
        cout << "AGC0" + to_string(n+1) << endl;
    }
    else if(10 <= n){
        cout << "AGC0" + to_string(n) << endl;
    }
    else{
        cout << "AGC00" + to_string(n) << endl;
    }
}