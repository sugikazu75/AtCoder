#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s, t;
    cin >> s >> t;

    map <char, vector <ll> > table;
    
    for(char c='a'; c<='z'; c++){
        vector <int> index(0);
        for(int i=0; i<s.size(); i++){
            if(s[i] == c){
                index.push_back(i);
            }
        }
        if(index.size() > 0){
            for(int i:index){
                if(t[i] != t[index[0]]){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    for(char c='a'; c<='z'; c++){
        vector <int> index(0);
        for(int i=0; i<t.size(); i++){
            if(t[i] == c){
                index.push_back(i);
            }
        }
        if(index.size() > 0){
            for(int i:index){
                if(s[i] != s[index[0]]){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Yes" << endl;
}


