#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <vector <int> > path(n, vector <int>(0));
    vector <int> visit(n,0);
    vector <int> table(n,0);
    queue <int> q;
    
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        path[a-1].push_back(b-1);
        path[b-1].push_back(a-1);
    }

    visit[0] = 1;
    q.push(0);
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int x:path[tmp]){
            if(visit[x]) continue;
            table[x] = (table[tmp] + 1) % 2;
            visit[x] = 1;
            q.push(x);
        }
    }


    int cnt1 = 0;
    rep(i,n){
        if(table[i] == 1){
            cnt1++;
        }
    }
    int cnt = 0;
    if(cnt1 >= n/2){
        for(int i=0; i<n; i++){
            if(cnt >= n/2) break;
            if(table[i] == 1) {
                cout << i +1 << " ";
                cnt++;
            }
        }
        cout << endl;
    }
    else{
        for(int i=0; i<n; i++){
            if(cnt >= n/2) break;
            if(table[i] % 2 == 0) {
                cout << i +1 << " ";
                cnt++; 
            }
        }
        cout << endl;
    }
}
