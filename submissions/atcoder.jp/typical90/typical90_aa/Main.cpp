#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    map <string, int> name;
    rep(i,n){
        string s;
        cin >> s;
        if(!name.count(s)){
            cout << i + 1 << endl;
            name[s] = 1;
        }
    }
}
