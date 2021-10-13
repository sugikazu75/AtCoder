#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    string s,t;
    cin >> s >> t;

    bool ng=true;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '@'){
            if((t[i]=='a')||(t[i]=='t')||(t[i]=='c')||(t[i]=='o')||(t[i]=='d')||(t[i]=='e')||(t[i]=='r')||(t[i]=='@')) ;
            else ng = false;
        }

        else if (t[i]=='@'){
            if((s[i]=='a')||(s[i]=='t')||(s[i]=='c')||(s[i]=='o')||(s[i]=='d')||(s[i]=='e')||(s[i]=='r')||(s[i]=='@')) ;
            else ng = false;
        }
        else{
            if(s[i] != t[i]){
                ng =false;
            }
        }
    }

    if(ng) cout << "You can win" << endl;
    else cout << "You will lose" << endl;
}