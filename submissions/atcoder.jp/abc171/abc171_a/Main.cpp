#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    char B;
    cin >> B;
    
    vector <char> alpha({'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'});

    bool small=false;
    for(char A:alpha){
        if(A == B){
            small = true;
        }
    }

    if(small){
        cout << 'a' << endl;
    }
    else{
        cout << 'A' << endl;
    }
}
