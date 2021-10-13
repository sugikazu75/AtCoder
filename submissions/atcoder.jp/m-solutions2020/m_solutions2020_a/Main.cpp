#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int a;
    cin >> a;
    int x = a/100;
    if(4<=x && x<=5) cout << 8 << endl;
    else if(6<=x && x <= 7) cout << 7 << endl;
    else if(8<=x && x <= 9) cout << 6 << endl;
    else if(10<=x && x <= 11) cout << 5 << endl;
    else if(12<=x && x <= 13) cout << 4 << endl;
    else if(14<=x && x <= 15) cout << 3 << endl;
    else if(16<=x && x <= 17) cout << 2 << endl;
    else{
        cout << 1 << endl;
    }
}