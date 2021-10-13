#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector <string> s(n);
    rep(i,n){
        string t;
        cin >> t;
        sort(all(t));
        s[i] = t;
    }
    
    sort(all(s));

    vector <long> num(0);

    long tmpnum = 1;
    string tmps = s[0];
    for(int i=1; i<n; i++){
        if(tmps == s[i]){
            tmpnum ++;
            if(i==n-1){
                num.push_back(tmpnum);
            }
        }
        else{
            num.push_back(tmpnum);
            tmpnum = 1;
            tmps = s[i];
            if(i==n-1){
                num.push_back(tmpnum);
            }
        }
    }

    long ans=0;
    for(long x:num){
        ans += x*(x-1)/2;
    }
    cout << ans << endl;

}