#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    map <string, int> table;
    table["SUN"] = 7;
    table["MON"] = 6;
    table["TUE"] = 5;
    table["WED"] = 4;
    table["THU"] = 3;
    table["FRI"] = 2;
    table["SAT"] = 1;

    cout  << table.at(s) << endl;
}