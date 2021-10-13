#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int h,w;
    cin >> h >> w;

    vector <vector <char> > maze(h, vector <char> (w));
    rep(i,h){
        string s;
        cin >> s;
        rep(j,w){
            maze[i][j] = s[j];
        }
    }

    queue <pair <int,int> > q;

    q.push({0,0});
    bool clear = false;
    bool po = true;

    while(!q.empty()){
        auto tmp = q.front();
        int a = tmp.first;
        int b = tmp.second;
        q.pop();
        if(a==h-1 && b==w-1) clear = true;
        
        if(a+1<h && b+1<w){
            if((maze[a+1][b] == '#') && (maze[a][b+1] == '#')){//どっちもいかなくちゃいけない
                    po = false;
            }
        }
        if(a-1>=0 && b-1>=0){
            if(maze[a-1][b] == '#' && maze[a][b-1]=='#'){
                po = false;
            }
        }
        
        if(a+1<h){
            if(maze[a+1][b] == '#'){
                q.push({a+1,b});
            }
        }
        if(b+1<w){
            if(maze[a][b+1] == '#'){
                q.push({a,b+1});
            }
        }
        
    }
    if(clear&&po) cout << "Possible" << endl;
    else cout << "Impossible" << endl;
}
