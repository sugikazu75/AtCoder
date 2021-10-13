#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    if(a == b){
        cout << x << endl;
        return 0;
    }
    else if(a > b){
        cout << x + (a-b-1)*min(y,2*x) << endl;
        return 0;
    }
    else{
        cout << x + (b-a)*min(2*x , y) << endl;
        return 0;
    }
}