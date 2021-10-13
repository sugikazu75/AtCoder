#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int w,h;
char maze[510][510];
bool reached[510][510];

void dfs(int y,int x){
    if(y<0 || h<=y || x<0 || w<=x || maze[y][x] == '#') return;//範囲外または壁
    if(reached[y][x]) return;//すでに訪れている
    
    reached[y][x] = true;//訪れた記録
    dfs(y+1,x);//上
    dfs(y-1,x);//下
    dfs(y,x+1);//右
    dfs(y,x-1);//左
}