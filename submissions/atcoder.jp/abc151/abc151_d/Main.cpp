#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int h, w;
    cin >> h >> w;

    vector <vector <char> > s(h, vector <char> (w));
    rep(i, h){
        string S;
        cin >> S;
        rep(j, w){
            s[i][j] = S[j];
        }
    }
    int ans = 0;

    rep(si, h){
        rep(sj, w){
            rep(gi, h){
                rep(gj, w){
                    if(s[si][sj] == '#' || s[gi][gj] == '#') continue;
                    else{
                        vector <vector <int> > cost(h, vector <int> (w, 1000000));
                        cost[si][sj] = 0;
                        queue <pair <int, int> > Q;
                        Q.push(make_pair(si, sj));
                        while(!Q.empty()){
                            int from_i = Q.front().first;
                            int from_j = Q.front().second;
                            Q.pop();
                            for(int i=0; i<4; i++){
                                int di = (1 - i) % 2;
                                int dj = (2 - i) % 2;
                                if(from_i + di < 0 || from_i + di >= h || from_j + dj < 0 || from_j + dj >= w || s[from_i + di][from_j + dj] ==  '#') continue;
                                else{
                                    if(cost[from_i + di][from_j + dj] > cost[from_i][from_j] + 1){
                                        cost[from_i + di][from_j + dj] = cost[from_i][from_j] + 1;
                                        Q.push(make_pair(from_i + di, from_j + dj));
                                    }
                                }
                            }
                        }
                        ans = max(ans, cost[gi][gj]);
                    }
                }
            }
        }
    }
    cout << ans << endl;
}