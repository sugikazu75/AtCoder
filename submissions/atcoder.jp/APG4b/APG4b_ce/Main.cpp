#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M;//N人数、M試合数
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);//Aが勝った人の並び、Bが負けた人の並び
  }
  vector<vector<string>> result(N, vector<string>(N, "-"));//NかけるNの配列
  
  for (int i=0; i < M; i++){
    int a=A.at(i)-1;
    int b=B.at(i)-1;
    result.at(a).at(b) = "o";
    result.at(b).at(a) = "x";
  }
  for (int i=0; i<N; i++){
    for (int j=0; j<N; j++){
      cout << result.at(i).at(j);
      if (j == N-1){
        cout << endl;
      }
      else{
      cout <<" ";
      }
    }  
  }
}