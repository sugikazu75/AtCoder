#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int c;

    if(b == 100){
        c = 1000 * a + b;
    }

    if(10 <= b && b <= 99){
        c = 100 * a + b;
    }

    if(b <= 9){
        c = 10 * a + b;
    }

    int rootc = std::pow(c,0.5);

    if (rootc * rootc == c){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}