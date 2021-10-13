#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;

    int a = n % 10;

    if((a==2) || (a==4) || (a==5) || (a==7)|| (a==9)){
        cout << "hon" << endl;
    }

    else if((a==3)){
        cout << "bon" << endl;
    }

    else{
        cout << "pon" << endl;
    }
}
