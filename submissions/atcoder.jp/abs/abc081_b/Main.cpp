#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;//Nを受け取る
  vector<int>A(N);
  for(int i=0;i<N;i++){//配列に格納
    cin >> A.at(i);
  }
  
  int j = 0;//カウンター
  int k = 0;//判断ゼロなら実行
  while(k==0){
    for (int i=0; i<N; i++){
      if(A.at(i) % 2 == 1){
        k = 1;
      }
    }
    
    for (int i=0; i<N; i++){
      A.at(i) = A.at(i)/2;
    }
    j++; 
  }
  cout << j-1 << endl;
}