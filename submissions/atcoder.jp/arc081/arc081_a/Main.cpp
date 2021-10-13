#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector <long> a(n);
    rep(i,n) cin >> a[i];

    map <long, int> edge;
    for(long x:a){
        if(edge.count(x)){
            edge.at(x) ++;
        }
        else{
            edge[x] = 1;
        }
    }
    
    sort(all(a));
    a.erase( unique (  a.begin() , a.end() ) , a.end() ); 

    long ledge=0, sedge=0;
    for(int x:a){
        if(edge.at(x) >= 4){
            if(x > ledge){
                sedge=x;
                ledge=x;
            }
            else if(x > sedge){
                sedge = x;
            }
        }
        else if(edge.at(x) >= 2){
            if(x > ledge){
                sedge = ledge;
                ledge = x;
            }
            else if(x > sedge){
                sedge = x;
            }
        }
    }
    cout << ledge * sedge << endl;

}
