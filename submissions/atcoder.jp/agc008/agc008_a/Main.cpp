#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll x,y;
    cin >> x >> y;
    if(x <= y){
        if(x <= 0 && y<=0){
            cout << y - x << endl;
            return 0;
        }
        else if(x <= 0 && y >= 0){
            if(abs(x) >= abs(y)){
                cout << min(y - x , abs(x) - abs(y) + 1) << endl;
            }
            else{
                cout << min(y - x , 1 + abs(y) - abs(x)) << endl;
            }
        }
        else{
            cout << y - x << endl;
        }
    }
    else{
        if(x <= 0 && y <= 0){
            cout << min(abs(y) - x + 1 , 1 + abs(y) - abs(x) + 1) << endl;;
        }
        else if(x >= 0 && y <= 0){
            if(abs(x) >= abs(y)){
                cout << 1 + abs(x) - abs(y) << endl;
            }
            else{
                cout << abs(y) - abs(x) + 1 << endl;
            }
        }
        else{
            cout << min(1 + y + abs(x) , 1 + abs(x) - abs(y) + 1) << endl;
        }
    }

}