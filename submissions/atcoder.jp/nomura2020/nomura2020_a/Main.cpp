#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int h1, m1, h2, m2, k;
    cin >> h1 >> m1 >> h2 >> m2 >> k;

    int time1 = 60*h1 + m1;
    int time2 = 60*h2 + m2;

    int time = time2 - time1;
    


    cout << time - k << endl;
}