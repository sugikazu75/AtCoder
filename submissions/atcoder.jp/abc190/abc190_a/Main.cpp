#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(c == 0){
        if(a <= b){
            cout << "Aoki" << endl;
        }
        else{
            cout << "Takahashi" << endl;
        }
    }
    else{
        if(b <= a){
            cout << "Takahashi" << endl;
        }
        else{
            cout << "Aoki" << endl;
        }
    }
}