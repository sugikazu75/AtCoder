#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追
  string op;
  int B;
  for(int i=1 ; i<=N ; i++){
    cin >> op >> B;
    
    if (op=="+"){
      A += B;
    }
    
    if (op=="-"){
      A -= B;
    }
    
    if(op=="*"){
      A *= B;
    }
    
    if(op=="/"){
      if(B==0){
        cout << "error" << endl;
        break;
      }
      else{
        A /= B;
      }
    }
    
    cout <<i<<":"<<A<<endl;
  } 
}

