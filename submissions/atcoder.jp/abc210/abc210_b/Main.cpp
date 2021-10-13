#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            if(i % 2 == 0) cout << "Takahashi" << endl;
            else cout << "Aoki" << endl;

            return 0;
        }
    }

}