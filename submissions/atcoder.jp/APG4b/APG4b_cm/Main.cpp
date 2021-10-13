#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  // ここにプログラムを追記
  int i = 0 ;
  string suma = "A:";
  while (i < A){
    suma = suma + "]";
    i++;
  }
  int j = 0 ;
  string sumb = "B:";
  while (j < B){
    sumb = sumb + "]";
    j++;
  }
  cout << suma << endl;
  cout << sumb << endl;
}