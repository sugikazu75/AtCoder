#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    bool ok = true;
    
    vector <char> t(n);
    vector <char> t1(n);
    rep(i,n){
        t[i] = s[i];
        t1[n-1-i] = s[i];
    }

    rep(i,n){
        if(t[i]!=t1[i]) ok = false;
    }

    vector <char> pre((n-1)/2);
    vector <char> pre1((n-1)/2);
    vector <char> post((n-1)/2);
    vector <char> post1((n-1)/2);

    rep(i,n){
        if(i < (n-1)/2){
            pre[i] = s[i];
            pre1[(n-1)/2 - 1 - i] = s[i];
        }
        if(i >= (n+1)/2){
            post[i - (n+1)/2] = s[i];
            post1[(n-1) - i] = s[i]; 
        }
    }
    rep(i,(n-1)/2){
        if(pre[i] != pre1[i]) ok = false;
        if(post[i] != post1[i]) ok = false;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;


}