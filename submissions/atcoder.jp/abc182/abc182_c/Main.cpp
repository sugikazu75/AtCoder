#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll m = n;

    vector <int> mod3(3,0);
    int keta = 0;
    
    while(n > 0){
        int tmp = n % 10;
        n /= 10;
        keta++;

        if(tmp % 3 == 0) mod3[0]++;
        else if (tmp % 3 == 1) mod3[1]++;
        else mod3[2]++;
    }

    if(keta == 1){
        if(m%3 == 0) cout << 0 << endl;
        else cout << -1 << endl;
        return 0;
    }

    else if(keta == 2){
        int now = 0;
        for(int i=0; i<3; i++){
            now += i*mod3[i];
        }
        now %= 3;

        if(now == 0){
            cout << 0 << endl;
            return 0;
        }

        else if(now == 1){
            if(mod3[1] > 0) cout << 1 << endl;
            else cout << -1 << endl;
            return 0;
        }
        else{
            if(mod3[2] > 0) cout << 1 << endl;
            else cout << -1 << endl; 
            return 0;
        }
    }


    int now = 0;
    for(int i=0; i<3; i++){
        now += i*mod3[i];
    }
    now %= 3;

    if(now == 0){
        cout << 0 << endl;
    }

    else if(now == 1){
        if(mod3[1] > 0) cout << 1 << endl;
        else if(mod3[2] > 1) cout << 2 << endl;
        else cout << -1 << endl;
    }

    else{
        if(mod3[2] > 0) cout << 1 << endl;
        else if(mod3[1] > 1) cout << 2 <<endl;
        else cout << -1 << endl; 
    }

}
