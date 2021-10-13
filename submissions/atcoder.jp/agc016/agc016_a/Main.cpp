#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    map <char, int> alpha;
    map <char, int> flag;
    int ans = 999999;
    
    for(char t = 'a'; t<='z'; t++){
        vector <int> index(1,-1);
        for(int i=0; i<s.size(); i++){
            if(s[i] == t){
                index.push_back(i);
            }
        }
        if(index.size() != 1){
            int tmp = 0;
            index.push_back(s.size());
            for(int j = 0; j<index.size()-1; j++){
                tmp = max(index[j+1] - index[j] - 1 , tmp);
            }
            ans = min(ans , tmp);
        }
    }

   
    cout << ans << endl;
} 
