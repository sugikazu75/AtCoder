#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,x;
    string s;
    cin >> n >> x;
    cin >> s;

    for(int i=0; i<n; i++){
        if(s[i] == 'o'){
            x++;
        }
        if(s[i] == 'x'){
            if(x == 0);
            else x--;
        }
    }
    cout << x << endl;
}