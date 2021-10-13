#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

//二分探索のライブラリ
int main(){
    //ソートする必要がある
    vector <int> a = {1,4,4,7,7,8,8,11, 13, 19};

    //binary_search
    //存在を確認できる
    cout << binary_search(a.begin(), a.end(), 4) << endl; //1
    cout << binary_search(a.begin(), a.end(), 9) << endl; //0

    //lower_bound
    //ソートされた配列内で、key以上の要素の内の一番左側のイテレータを返す
    //lower_boundのイテレータから先頭のイテレータを引くと、あるkeyより小さい要素の個数を求めることができる
    //末尾のイテレータからlower_boundのイテレータを引くと、あるkey以上の要素の個数を求めることができる。
    auto Iter1 = lower_bound(all(a), 4);
    auto Iter2 = lower_bound(all(a), 6);
    auto Iter5 = lower_bound(all(a), 20);
    
    cout << "Iter1 = " << *Iter1 << endl; //Iter1 = 4
    cout << "Iter2 = " << *Iter2 << endl; //Iter2 = 7
    cout << "Iter5 = " << *Iter5 << endl; //Iter5 = 1326115891

    cout << "Iter1 = " << Iter1 - a.begin() << endl; //Iter1 = 1
    cout << "Iter2 = " << Iter2 - a.begin() << endl; //Iter2 = 3
    cout << "Iter5 = " << Iter5 - a.begin() << endl; //Iter5 = 10
    
    cout << "Iter1 = " << a.end() - Iter1 << endl; //Iter1 = 9 
    cout << "Iter2 = " << a.end() - Iter2 << endl; //Iter2 = 7
    cout << "Iter5 = " << a.end() - Iter5 << endl; //Iter5 = 0


    //upper_bound
    //ソートされた配列内で、keyより大きい要素の内の一番左側のイテレータを返す
    //upper_boundのイテレータから先頭のイテレータを引くと、あるkey以下の要素の個数を求めることができる。
    //末尾のイテレータからupper_boundのイテレータを引くと、あるkeyより大きい要素の個数を求めることができる。

    //lower_boundとupper_boundに同じkeyを指定して、イテレータの差をとると、keyの値の要素の個数となる
    auto low1 = lower_bound(all(a), 4);
    auto up1 = upper_bound(all(a), 4);
    cout << up1 - low1 << endl;
}