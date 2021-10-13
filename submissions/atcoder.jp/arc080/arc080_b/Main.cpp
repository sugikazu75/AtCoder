#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int h,w;
    cin >> h >> w;
    int n;
    cin >> n;
    vector <int> color(0);
    rep(i,n){
        int a;
        cin >> a;
        rep(j,a){
            color.push_back(i+1);
        }
    }

    /*rep(i,color.size()){
        cout << color[i] <<  " ";
    }*/

    vector <vector <int> > table(h, vector <int>(w));

    int now = 0;
    for(int i=0; i<h; i++){
        if(i%2 == 0){
            for(int j=0; j<w; j++){
                table[i][j] = color[now];
                now++;
            }
        }
        else{
            for(int j=w-1; j>=0; j--){
                table[i][j] = color[now];
                now++;
            }
        }
    }

    rep(i,h){
        rep(j,w){
            if(j == w-1){
                cout << table[i][j] << endl;
            }
            else{
                cout << table[i][j] << " ";
            }
        }
    }
}