#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    int k;
    cin >> s >> k;

    vector <string> ans(0);

    for(int i=0; i<s.size(); i++){      //最初の文字
        int now = 0;
        string sub = "";
        while(now < 5){
            if(i + now >= s.size()) break;
            sub = sub + s[i + now];
            now++;
            ans.push_back(sub);
        }
    }

    sort(all(ans));
    ans.erase(unique(all(ans)), ans.end());

    cout << ans[k-1] << endl;

}