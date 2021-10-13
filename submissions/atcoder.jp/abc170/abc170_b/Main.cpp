#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int head,leg;
    cin >> head >> leg;
    if(leg%2 == 1){
        cout << "No" << endl;
        return 0;
    }
    else{//leg%2==0
        if(((leg/2-head)>=0)&&((2*head-leg/2)>=0)){
            cout << "Yes" << endl;
            return 0;
        }
        else{
            cout << "No" << endl;
        }
    }
}
