#include <bits/stdc++.h>
using namespace std;
int main(){

    map <int,int> table;    // map <Keyの型, Valueの型> 変数名;
    
/*  値の追加        変数[key] = value;

    値の削除	    変数.erase(key);

    値へのアクセス	 変数.at(key)	

    所属判定	    変数.count(key)	

    要素数の取得     変数.size() */



    set <int> st;                //int型をデータとする連想コンテナ。要素が二分木によってsortされる。key自体がvalue。重複を許さない。

    //値の追加                      st.insert(値)
    //値の削除                      st.erase(値), st.erase(イテレータ)
    //値の検索。イテレータを返す       st.find(値)
    //値の検索。指定値の個数を返す     st.count(値)
    //空かどうかを返す.空だとtrue     st.empty()
    //sizeを返す                   st.size()
}