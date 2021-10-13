#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

char maze[2010][2010];

int main(){
    ll h,w;
    cin >> h >> w;
    ll INF = 10000000;
    pair <int, int> start, goal;
    map <char, vector <pair<int, int> > > alpha;
    map <char, bool> used;
    
    rep(i,h){
        string s;
        cin >> s;
        rep(j,w){
            maze[i][j] = s[j];
            if(maze[i][j] == 'S') start = make_pair(i,j);
            else if(maze[i][j] == 'G') goal = make_pair(i,j);
            else if(!(maze[i][j] == '.' || maze[i][j] == '#')){
                if(!alpha.count(maze[i][j])){
                    alpha[maze[i][j]] = {make_pair(i,j)};
                    used[maze[i][j]] = false;
                }
                else alpha.at(maze[i][j]).push_back(make_pair(i,j));
            }
        }
    }

    ll dx[4] = {1,0,-1,0};
    ll dy[4] = {0,1,0,-1};
    vector <vector <ll> > d(h, vector<ll>(w, INF));
    d[start.first][start.second] = 0;

    queue <pair <int, int> > q;
    q.push(start);

    while(!q.empty()){
        ll now_x = q.front().first;
        ll now_y = q.front().second;
        ll now_d = d[now_x][now_y];
        q.pop();
        if(maze[now_x][now_y] != '.'){
            if(alpha.count(maze[now_x][now_y]) && !used.at(maze[now_x][now_y])){
                used.at(maze[now_x][now_y]) = true;
                for(auto p : alpha.at(maze[now_x][now_y])){
                    ll next_x = p.first;
                    ll next_y = p.second;
                    if(d[next_x][next_y] > now_d + 1){
                        d[next_x][next_y] = now_d + 1;
                        q.push({next_x, next_y});
                    }
                }
            }
        }
        for(ll i=0; i<4; i++){
            ll next_x = now_x + dx[i];
            ll next_y = now_y + dy[i];
            if(next_x < 0 || h <= next_x || next_y < 0 || w <= next_y || maze[next_x][next_y] == '#') continue;
            else{
                if(d[next_x][next_y] > now_d + 1){
                    d[next_x][next_y] = now_d + 1;
                    q.push({next_x, next_y});
                }
            }
        }
    }

    if(d[goal.first][goal.second] == INF){
        cout << -1 << endl;
    }
    else{
        cout << d[goal.first][goal.second] << endl;
    }

}