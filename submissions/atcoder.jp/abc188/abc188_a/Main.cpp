#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int x,y;
    cin >> x >> y;
    if(min(x,y) + 3 > max(x,y)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
