#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

char maze[60][60];
int dist[60][60];
bool reached[60][60];
int R,C;
queue < pair <int,int> > task;


int main(){
    cin >> R >> C;
    int sy,sx,gy,gx;
    cin >> sy >> sx;
    cin >> gy >> gx;
    sy--;sx--;gy--;gx--;

    rep(i,R){
        string s;
        cin >> s;
        rep(j,C){
            maze[i][j] = s[j];
            dist[i][j] = 0;
            reached[i][j] = false;
        }
    }

    task.push({sy,sx});
    reached[sy][sx] = true;

    vector <int> dx({1,0,-1,0});
    vector <int> dy({0,1,0,-1});
    while(!task.empty()){
        int ndis = dist[task.front().first][task.front().second] + 1;
        rep(i,4){
            int ddy = task.front().first + dy[i];
            int ddx = task.front().second + dx[i];
            if(ddy<0 || R<=ddy || ddx<0 || C<=ddx || maze[ddy][ddx] == '#') continue;
            if(reached[ddy][ddx]) continue;
            task.push({ddy,ddx});
            dist[ddy][ddx] = ndis;
            reached[ddy][ddx] = true;
        }
        task.pop();
    }

    cout << dist[gy][gx] << endl;
}