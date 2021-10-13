#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    string s;
    cin >> s;

    int y = s[s.size() - 1] - '0';
    string tmp = "";
    for(int i=0; i<s.size()-2; i++){
        tmp += s[i];
    }

    int x = stoi(tmp);

    if(0 <= y && y <= 2){
        cout << x << "-" << endl;
    }
    else if(3 <= y && y <= 6){
        cout << x << endl;
    }
    else{
        cout << x << "+" << endl;
    }
}
