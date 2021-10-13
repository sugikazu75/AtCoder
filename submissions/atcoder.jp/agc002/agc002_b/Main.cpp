#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,m;
    cin >> n >> m;

    vector <int> num(n,1);
    vector <bool> visit(n,false);

    visit[0] = true;
    
    rep(i,m){
        int x,y;
        cin >> x >> y;
        num[x-1]--;
        num[y-1]++;

        if(visit[x-1]) visit[y-1] = true;

        if(num[x-1] == 0){
            visit[x-1] = false;
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(visit[i]){
            if(num[i]>0){
                ans ++;
            }
        }
    }

    cout << ans << endl;

}
