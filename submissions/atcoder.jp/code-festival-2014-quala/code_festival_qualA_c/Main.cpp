#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int a,b;
    cin >> a >> b; 

    //year of a-b
    cout << (b/4 - (a-1)/4) - (b/100 - (a-1)/100) + (b/400 - (a-1)/400) << endl;
}
