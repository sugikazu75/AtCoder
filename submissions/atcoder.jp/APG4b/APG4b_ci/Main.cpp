#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  vector<int>a(3);
  a.at(0) = A;
  a.at(1) = B;
  a.at(2) = C;
  sort(a.begin(),a.end());
  cout << a.at(2) - a.at(0) <<endl;
}

