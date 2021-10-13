#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,A,B;
  cin >> N >> A >> B;
  int k=0;//桁の和カウンター
  int ans=0;//総和カウンター
  int n;
  
  for (int i=1; i<=N; i++){
    k = 0;
    n = i;
    if (n == 10000){
      ans = ans + 10000;
      break;
    }
      
    while (n >=1000){
      n = n - 1000;
      k++;
    }
    while (n>=100){
      n = n - 100;
      k++;
    }
    while (n>=10){
      n = n - 10;
      k++;
    }
    while (n>=1){
      n = n - 1;
      k++;
    }
    if (A<=k && k<=B){
      ans = ans + i;
    }
  }
  cout << ans <<endl;
}