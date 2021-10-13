#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;

    n = n * 108 / 100;

    if(n < 206) cout << "Yay!" << endl;
    else if(n == 206) cout << "so-so" << endl;
    else cout << ":(" << endl;
}
