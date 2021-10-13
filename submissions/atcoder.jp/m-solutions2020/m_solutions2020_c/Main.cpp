#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n,k;
    cin >> n >> k;
    vector <long long> a(n);
    rep(i,n) cin >> a[i];
    int left = 0;
    int right = k;
    for(int i=k; i<n; i++){
        if(a[left] < a[right]){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
        left++;
        right++;
    }
}