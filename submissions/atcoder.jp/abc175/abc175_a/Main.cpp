#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    string s;
    cin >> s;
    if(s == "RRR") cout << 3 << endl;
    else if(s=="RSS" || s=="SRS" || s=="SSR" || s=="RSR") cout << 1 << endl;
    else if (s=="RRS" || s=="SRR") cout << 2 << endl;
    else cout << 0 << endl;
}
