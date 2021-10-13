#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b;
    cin >> a >>b;
    bitset <8> ba(a);
    bitset <8> bb(b);

    bitset <8> bc;
    bc = ba ^ bb;

    int c = bc.to_ullong();

    cout << c << endl;
}