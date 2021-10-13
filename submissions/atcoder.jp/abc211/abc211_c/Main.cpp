#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;

    ll mod = 1000000007;

    //table[i][j] = j文字目まで見てi個そろっている
    vector <vector <ll> > table(9, vector <ll> (s.size() + 1, 0));     
    rep(i,9){
        table[i][0] = 0;
    }

    vector <char> elements = {'c', 'h', 'o', 'k', 'u', 'd', 'a', 'i'};
    for(int i=1; i<=s.size(); i++){
        bool find = false;
        int index = 9;
        for(int j=0; j<9; j++){
            if(s[i-1] == elements[j]){
                find = true;
                index = j;
                break;
            }
        }
        for(int j=0; j<9; j++){
            if(j == index){
                if(index == 0){
                    table[1][i] = (table[1][i] + table[0][i-1] + 1) % mod;
                }
                else{
                    table[index + 1][i] = (table[index+1][i] + table[index][i-1]) % mod;
                }
            }
            table[j][i] = (table[j][i] + table[j][i-1]) % mod;
        }
    }

    cout << table[8][s.size()] << endl;
}