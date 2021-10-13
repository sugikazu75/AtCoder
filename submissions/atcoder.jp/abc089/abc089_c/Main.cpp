#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;

    long long m=0,a=0,r=0,c=0,h=0;

    rep(i,n){
        string s;
        cin >> s;
        if(s[0]=='M') m++;
        if(s[0]=='A') a++;
        if(s[0]=='R') r++;
        if(s[0]=='C') c++;
        if(s[0]=='H') h++;
    }

    long long ans=0;
    ans = m*a*r + m*a*c + m*a*h + m*r*c + m*r*h + m*c*h + a*r*c + a*r*h + a*c*h + r*c*h;

    cout << ans << endl;
}