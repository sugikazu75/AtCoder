#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    long long n;
    cin >> n;

    vector <char> alpha({'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'});

    string s = "";

    while(n > 0){
        long long amari = (n-1) % 26;
        s.push_back(alpha[amari]);
        n = (n-1) / 26;
    }

    reverse(all(s));

    cout << s << endl;

}
