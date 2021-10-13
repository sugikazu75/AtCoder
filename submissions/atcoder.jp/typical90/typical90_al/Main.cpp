#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll A,B;
    cin >> A >> B;
    ll g = __gcd(A,B);

    ll a = A / g , b = B / g;

    ll large = 1000000000000000000;

    if(g * min(a,b) > large / max(a,b)){
        cout << "Large" << endl;
    }
    else{
        cout << g * a * b << endl;
    }
}

