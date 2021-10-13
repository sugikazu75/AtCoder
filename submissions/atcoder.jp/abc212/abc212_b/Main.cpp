#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3]){
        cout << "Weak" << endl;
        return 0;
    }

    for(int i=1; i<=3; i++){
        int a = s[i] - '0';
        int b = s[i-1] - '0';

        if(a != (b + 1) % 10){
            cout << "Strong" << endl;
            return 0;
        }
    }

    cout << "Weak" << endl;

}