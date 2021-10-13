#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  int Y;
  cin >> Y;
  int a,b,c;
  a = -1;
  b = -1;
  c = -1;
  
  for (int i=0; i<=N; i++){
    for (int j=0; j<=N-i; j++){
      if (Y == 10000*i + 5000*j + 1000*(N-i-j)){
        a = i;
        b = j;
        c = N-i-j;
        break;          
      }
    }
  }
  if (a == -1){
    cout << -1 << " " << -1 << " " << -1 << endl;
  }
  else{
    cout << a << " " << b << " " << c << endl;
  }
}