#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a = 6 , b = 5;              //0110 0101
    string c = "1001";
    const int k = 4;           
    bitset<k> ba(a);                //intからbit列を生成。kは桁数で定数。
    bitset<k> bb(b);
    bitset<k> bc(c);                //0と1からなる文字列からbit列生成   

    auto bor = ba | bb;             //OR演算子 |
    auto band = ba & bb;            //AND演算子 &
    auto bxor = ba ^ bb;            //XOR演算子 ^
    auto nota = ~ba;                //NOT演算子 ~
    auto left = ba << 1;            //左シフト演算 << 足りないbitは0で埋まる
    auto right = ba >> 1;           //右シフト演算 >> 足りないbitは0で埋まる

    //変数.set(位置,値) bitを指定できる。位置は0-indexで右から数える。
    //変数.set() 全てのbitを1にする
    //変数.reset() 全てのbitを0にする
    //変数.flip() 全てのbitを反転する
    //変数.test(調べる位置) bitが1ならtrue, 0ならfalseを返す関数。位置は0-indexで右から数える。
    //変数.all() 全てのbitが1ならtrue, そうでなければfalseを返す
    //変数.any() いずれかのbitが1ならtrue, 全てのbitが0ならfalseを返す
    //変数.count() 1のbitの個数を数える
    //変数.to_string() bit列を文字列化する
    //変数.to_ullong() bit列を整数化する

    int n = 3;
    int l = 3;
    //bit全探索
    for(int i=0; i < (1<<l); i++){      //1<<lは2のl乗。
        bitset<k> s(i);                 //kは定数
        for(int j=0; j<n; j++){         //nは調べたい桁まで（右から）。選択肢の実際の個数。
            if(s.test(j)){              //.test(j)でj番目が1ならtrue,0ならfalseを返す
                //なんかする
            }
        }
    }
}