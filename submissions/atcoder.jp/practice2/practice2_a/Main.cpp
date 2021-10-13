#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define FOR(it,c) for(__typeof((c).begin()) it=(c).begin(); it!=(c).end(); ++it)
#define ALLOF(c) (c).begin(), (c).end()
typedef long long ll;
typedef unsigned long long ull;


int main(){
  int N, Q;
  cin >> N >> Q;

  dsu d(N);

  rep(i,Q){
    int t, u, v;
    cin >> t >> u >> v;
    if(t == 0){
      d.merge(u, v);
    }else{
      if(d.same(u, v)) cout << 1 << endl;
      else cout << 0 << endl;
    }
  }
  
  
  return 0;
}
