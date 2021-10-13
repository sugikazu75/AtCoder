#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    string S;
    cin >> S;
    vector <char> table(100);

    for(char s = 'A'; s<='Z'; s++){//65-90
        int tmp = s;
        table[tmp] = s;
    }

    for(int i=0; i<S.size(); i++){
        int tmp = S[i] + n;
        if(tmp > 90) tmp -= 26;
        if(i != S.size()-1) cout << table[tmp];
        else cout << table[tmp] << endl;
    }
}