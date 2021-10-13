#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B;
  cin >> A >> B;
  
  int minAB = min(A,B);
  
  int gcdAB = 1;
  for(int i=2; i<=minAB; i++){
    if(A % i ==0  &&  B % i ==0){
      gcdAB = i;
    }
  }
  
  long int a = A/gcdAB;
  long int b = B/gcdAB;
  long int ans = a * b *gcdAB;
  cout << ans << endl;
}