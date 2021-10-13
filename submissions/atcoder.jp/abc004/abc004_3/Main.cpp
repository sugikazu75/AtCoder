#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;

    vector <int> a ({1,2,3,4,5,6});
    int ama = n % 30;//0-29

    for(int i=0; i<ama; i++){
        swap(a[i%5], a[i%5+1]);
    }

    rep(i,6){
        cout << a[i];
        if(i==5) cout << endl;
    }
}