#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector <bool> init(10, false);

    int ans = 0;

    for(int i=0; i<n-2; i++){
        int tmp = s[i] - '0';
        if(init[tmp]) continue;//先頭の数が検証済み
        
        else{
            init[tmp] = true;
            vector <bool> second(10, false);
            int cnt = 0;
            for(int j=i+1; j<n-1; j++){
                int tmpj = s[j] - '0';
                if(second[tmpj] ||  cnt == 10) continue;//2番目の数が検証済み
                else{
                    second[tmpj] = true;
                    cnt++;
                    vector <bool> third(10,false);
                    int cntk = 0;
                    for(int k=j+1; k<n; k++){
                        int tmpk = s[k] - '0';
                        if(third[tmpk] || cntk==10) continue;
                        else{
                            third[tmpk] = true;
                            cntk++;
                            ans++;
                        }
                    }

                }
            }
        }
    }
    cout << ans << endl;
    
}