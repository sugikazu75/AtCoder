#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    //数値型から文字列
    int number=100;
    string s = to_string(number);
    
    //char sからint 
    char s = '9';
    int num = s - '0';

    //stringからint
    string t = "100";
    int k = stoi(s);
}