#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    ll q;
    cin >> q;

    priority_queue <ll, vector <ll>, greater<ll> > p;
    queue <ll> non_sort;

    rep(i,q){
        ll c;
        cin >> c;
        if(c == 1){
            ll x;
            cin >> x;
            non_sort.push(x);
        }
        else if(c == 2){
            if(!p.empty()){
                cout << p.top() << endl;
                p.pop();
            }
            else{
                cout << non_sort.front() << endl;
                non_sort.pop();
            }
        }
        else{
            while(!non_sort.empty()){
                ll tmp = non_sort.front();
                non_sort.pop();
                p.push(tmp);
            }
        }
    }
}
