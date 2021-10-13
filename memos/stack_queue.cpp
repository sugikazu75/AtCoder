#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    //int型をデータとするスタックを用意.後ろに入れて後ろから出す.DFS
    stack <int> s;  
    s.push(1100);   //追加
    s.push(22);     //追加
    s.push(35);     //追加
    cout << s.top() << endl;    //最後に追加した値.top()
    s.pop();    //最後に追加した値を取り除く.pop()
    cout << s.top() << endl;
    cout << s.size() << endl;   //.size()
    
    s.pop();
    s.pop();
    if(s.empty()) cout << "empty" << endl;  //.empty()でstackが空であればtrueを返す
    cout << endl;

    //int型をデータとするキューを用意.後ろに入れて前から出す.BFS
    queue <int> q;  
    q.push(34);     //追加
    q.push(29);     //追加
    q.push(10);     //追加
    cout << q.front() << endl;      //最初に追加した値.front()
    q.pop();                        //最初に追加した値を取り除く.pop()
    cout << q.front() << endl;
    cout << q.size() << endl;       //.size()

    q.pop();       
    q.pop();
    if(q.empty()) cout << "empty" << endl;  //.emptyでqueueが空であればtrueを返す
    cout << endl;

    //deque stackとqueueの両方の性質を持つ
    deque <int> d;
    d.push_back(10);
    //d.pop_back();
    cout << d.back() << endl;
    d.push_front(3);
    //d.pop_front();
    cout << d.front() << endl;
    cout << d.size() << endl;
    cout << d.at(1) << endl;
    if(d.empty());
    cout << endl;

    priority_queue <int> p;     //int型をデータとする優先度付きキューを用意.大きい順に出せる
    // priority_queue <int, vector <int>, greater<int>>     小さい順に出す(dijkstraなど)
    p.push(3);  //追加
    p.push(5);  //追加
    p.push(4);  //追加

    cout << p.top() << endl;    //最大値.top()
    p.pop();                    //最大値を削除.pop()
    cout << p.top() << endl;    //
    cout << p.size() << endl;   //.size()

}