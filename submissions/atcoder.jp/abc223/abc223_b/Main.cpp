#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    if(s.size() == 1){
        cout << s << endl;
        cout << s << endl;
        return 0;
    }

    vector <string> ans(0);
    
    //cout << s.size() << endl;

    for(int i=0; i<n; i++){
        char c = s[s.size() - 1];
        s.erase(s.size() - 1);

        string tmp{c};

        s = tmp + s;

        ans.push_back(s);
    }

    sort(all(ans));

    cout << ans[0] << endl;
    cout << ans[n - 1] << endl;
}