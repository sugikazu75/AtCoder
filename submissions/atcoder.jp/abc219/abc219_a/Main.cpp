#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int x;
    cin >> x;

    if(0 <= x && x < 40){
        cout << 40 - x << endl;
    }
    else if(x < 70){
        cout << 70 - x << endl;
    }
    else if(x < 90){
        cout << 90 - x << endl;
    }
    else{
        cout << "expert" << endl;
    }


}