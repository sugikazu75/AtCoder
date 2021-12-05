#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    //数値型から文字列
    int i1=100;
    string str1 = to_string(i1);

    //int to char
    int i2 = 100;
    char ch2 = i2 + '0';
    
    //char sからint 
    char ch3 = '9';
    int i3 = ch3 - '0';

    //stringからint
    string str4 = "100";
    int i4 = stoi(str4);
}