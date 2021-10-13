#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;

    vector <int> b(n);
    rep(i,n)cin >> b[i];
    
    vector <int> use(n,0);
    int cnt = 0;
    bool find = false;
    int now = 0;

    vector <int> ans(0);
    while(cnt < n){
        find = false;
        now = 0;
        int index;
        for(int i=0; i<n; i++){
            if(!use[i]) now++;
            if(b[i] == now && use[i] == 0){
                find = true;
                index = i;
            }
        }
        if(find){
            ans.push_back(b[index]);
            use[index] = 1;
            cnt++;
        }
        else{
            cout << -1 << endl;
            return 0;
        }
    }

    for(int i=0; i<n; i++){
        cout << ans[n - 1 - i] << endl;
    }
}