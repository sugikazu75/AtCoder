#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,a,b,c,d;
    string s;
    cin >> n >> a >> b >> c >> d;
    cin >> s;

    if(c < d){
        for(int i=b-1; i<d-1; i++){
            if(s[i] == '#' && s[i+1] == '#'){
                cout << "No" << endl;
                return 0;
            }
        }
        for(int i=a-1; i<c-1; i++){
            if(s[i] == '#' && s[i+1] == '#'){
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    else{
        for(int i=b-1; i<d-1; i++){
            if(s[i] == '#' && s[i+1] == '#'){
                cout << "No" << endl;
                return 0;
            }
        }
        for(int i=a-1; i<c-1; i++){
            if(s[i] == '#' && s[i+1] == '#'){
                cout << "No" << endl;
                return 0;
            }
        }
        bool ok = false;
        for(int i=b-2; i<=d-2; i++){
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                ok = true;
            }
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
}