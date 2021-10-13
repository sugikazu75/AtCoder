#include <bits/stdc++.h>
using namespace std;
int min_3(int x,int y,int z){
  int min=x;
  if (x > y){
    min = y;
  }
  if (min > z){
    min = z;
  }
  return min;
}

int gcd(int x,int y,int z){
  int gcd = 1;
  int min_xyz = min_3(x,y,z);
  for (int i=1; i <= min_xyz ; i++){
    if (x % i == 0 && y % i == 0 && z % i == 0){
      gcd = i;
    }
  }
  return gcd;
}

int main(){
  int K;
  cin >> K;
  int ans=0;
  for (int i=1; i<=K; i++){
    for(int j=1; j<=K; j++){
      for(int k=1; k<=K; k++){
        ans += gcd(i,j,k);
      }
    }
  }
  cout << ans << endl;
}