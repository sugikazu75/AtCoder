#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B;
  cin >> A >> B;
  int ans = -1;
  for (int i=1; i<=1250; i++){
    double a_1 = i*0.08;
    double b_1 = i*0.1;
    int a = a_1;
    int b = b_1;
    if (A == a && B == b){
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}

