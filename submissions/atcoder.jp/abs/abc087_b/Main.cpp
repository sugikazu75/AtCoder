#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,C,X;
  cin >> A >> B >> C >> X;
  
  int ans = 0;
  int maisuu_50;  
  for (int i=0; i<=A; i++){
    for(int j=0; j<=B; j++){
      maisuu_50 = (X - 500*i - 100*j)/50;
      if(0 <= maisuu_50 && maisuu_50 <= C){
        ans++;
      }
    }
  }
  cout  << ans << endl;
}