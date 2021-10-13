#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    vector <int> num(10,0);

    if(s.size() <= 2){
        int small = stoi(s); 
        if(s.size() == 1){
            if(small % 8 == 0) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else{
            int small10 = small / 10;
            int small1 = small % 10;

            if((small10*10+small1) % 8 == 0 || (small1*10+small10)%8 == 0) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        return 0;
    }

    for(int i=0; i < s.size(); i++){
        char tmp = s[i];
        int tmp1 = tmp - '0';
        num[tmp1] ++;
    }

    bool ok = false;

    for(int i=0; i<=992; i+=8){
        int num100 = i / 100;
        int num10  = (i - 100 * num100) / 10;
        int num1   = i%10;

        num[num100]--;
        num[num10]--;
        num[num1]--;

        if((num[num100] >= 0) && (num[num10] >= 0) && (num[num1] >= 0)){
            ok = true;
        }

        num[num100] ++;
        num[num10] ++;
        num[num1] ++;

        if(ok) break;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}