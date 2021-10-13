#include <bits/stdc++.h>
using namespace std;

int main(){
    long int N;
    cin >> N;
    int rootN = std::pow(N,0.5);

    int c=1;
    for(int i=1; i<=rootN; i++){
        if (N % i == 0){
            c = i;
        }
    }

    cout << c + N/c -2 << endl;
}
