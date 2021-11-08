#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    int tmp = s[n-3] - '0';

    int t = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '.') break;
        else{
            t *= 10;
            int c = s[i] - '0';
            t += c;
        }
    }

    if(tmp >= 5){
        cout << t + 1 << endl;
    }
    else{
        cout << t << endl;
    }

}