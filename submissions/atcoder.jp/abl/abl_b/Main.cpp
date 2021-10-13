#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    long long a,b,c,d;
    cin >> a >> b  >> c >> d;

    int lena = b - a;
    int lenb = d - c;

    if(lena >= lenb){
        if(((a<=c)&&(c<=b)) || ((a<=d)&&(d<=b))){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    if(lena < lenb){
        if(((c<=a)&&(a<=d)) || ((c<=b)&&(b<=d))){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
