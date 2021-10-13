#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll k;
    cin >> k;   

    queue <ll> q;
    for(int i=1; i<=9; i++){
        q.push(i);
    }

    ll cnt = 0;
    ll now;
    while(cnt < k){
        now = q.front();
        q.pop();
        //cout << now << endl;
        cnt++;
        ll keta1 = now % 10;
        if(keta1 != 0) q.push(10 * now + keta1 - 1);
        q.push(10 * now + keta1);
        if(keta1 != 9) q.push(10 * now + keta1 + 1);
    }

    //cout << endl;
    cout << now << endl;
}