#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

long long extgcd(long long a, long long b, long long &x, long long &y) {
    int d = a;
    if(b != 0){
        d = extgcd(b, a%b, y, x);
        y -= (a / b) * x;
    }
    else{
        x = 1; y = 0;
    }
    return d;
}

int main() {
    long long a = 1029, b = 1071, x, y;
    long long gcd = extgcd(a, b, x, y);
    printf("%d x %d + %d x %d = %d\n", a, x, b, y, gcd);
}