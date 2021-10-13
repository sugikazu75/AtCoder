#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    char s;
    cin >> s;
    char t;
    cin >> t;

    if(s == 'Y'){
        if(t == 'a') cout << 'A' << endl;
        if(t == 'b') cout << 'B' << endl;
        if(t == 'c') cout << 'C' << endl;
    }
    else{
        cout << t << endl;
    }
}