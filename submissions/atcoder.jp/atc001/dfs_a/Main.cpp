#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int w,h;
char maze[510][510];
bool reached[510][510];

void dfs(int y,int x){
    if(y<0 || h<=y || x<0 || w<=x || maze[y][x] == '#') return;
    if(reached[y][x]) return;
    
    reached[y][x] = true;
    dfs(y+1,x);
    dfs(y-1,x);
    dfs(y,x+1);
    dfs(y,x-1);
}

int main(){
    cin >> h >> w;

    int sx = 0;
    int sy = 0;
    int gx = 0;
    int gy = 0;
    
    rep(i,h){
        string s;
        cin >> s;
        rep(j,w){
            maze[i][j] = s[j];
            if(maze[i][j] == 's'){
                sy = i;
                sx = j;
                reached[i][j] = false;
            }
            else if(maze[i][j] == 'g'){
                gy = i;
                gx = j;
                reached[i][j] = false;
            }
            else{
                reached[i][j] = false;
            }
        }
    }

    dfs(sy,sx);

    if(reached[gy][gx]) cout << "Yes" << endl;
    else cout << "No" << endl;

}