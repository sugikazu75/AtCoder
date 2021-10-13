#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll a , b, c;
    cin >> a >> b >> c;

    double pro[101][101][101];

    rep(i,101){
        rep(j,101){
            rep(k,101){
                pro[i][j][k] = 0.0;
            }
        }
    }

    pro[a][b][c] = 1.00;

    for(int i=0; i<101; i++){   
        for(int j=0; j<101; j++){
            for(int k=0; k<101; k++){
                if(i==0 && j==0 && k==0) continue;               
                if(i==100){
                    if(j!=100 && k!=100){
                        if(i > 0 && i+j+k>1) pro[i][j][k] += pro[i-1][j][k] * ((double)i - 1) / (double) ((double)i + (double)j + (double)k - 1.0);
                        //pro[i][j][k] += pro[i][j-1][k] * ((double)j - 1) / (double) ((double)i + (double)j + (double)k - 1.0);
                        //pro[i][j][k] += pro[i][j][k-1] * ((double)k - 1) / (double) ((double)i + (double)j + (double)k - 1.0);
                    }
                }
                else if(j==100){
                    if(k!=100 && i!=100){
                        //pro[i][j][k] += pro[i-1][j][k] * ((double)i - 1) / (double) ((double)i + (double)j + (double)k - 1.0);
                        if(j > 0 && i+j+k>1) pro[i][j][k] += pro[i][j-1][k] * ((double)j - 1) / (double) ((double)i + (double)j + (double)k - 1.0);
                        //pro[i][j][k] += pro[i][j][k-1] * ((double)k - 1) / (double) ((double)i + (double)j + (double)k - 1.0);
                    }
                }
                else if(k==100){
                    if(i!=100 && j!=100){
                        //pro[i][j][k] += pro[i-1][j][k] * ((double)i - 1) / (double) ((double)i + (double)j + (double)k - 1.0);
                        //pro[i][j][k] += pro[i][j-1][k] * ((double)j - 1) / (double) ((double)i + (double)j + (double)k - 1.0);
                        if(k > 0 && i+j+k>1) pro[i][j][k] += pro[i][j][k-1] * ((double)k - 1) / (double) ((double)i + (double)j + (double)k - 1.0);
                    }
                }
                else{
                    if(i > 0 && i+j+k>1) pro[i][j][k] += pro[i-1][j][k] * ((double)i - 1) / (double) ((double)i + (double)j + (double)k - 1.0);
                    if(j > 0 && i+j+k>1) pro[i][j][k] += pro[i][j-1][k] * ((double)j - 1) / (double) ((double)i + (double)j + (double)k - 1.0);
                    if(k > 0 && i+j+k>1) pro[i][j][k] += pro[i][j][k-1] * ((double)k - 1) / (double) ((double)i + (double)j + (double)k - 1.0);
                }

            }
        }
    }


    double ans = 0.0;
    for(int i=0; i<101; i++){   
        for(int j=0; j<101; j++){
            for(int k=0; k<101; k++){
                if(i==100){
                    if(j!=100 && k!=100){
                        ans += pro[i][j][k] * (((double)i + (double)j + (double)k) - ((double)a + (double)b + (double)c));
                    }
                }
                if(j==100){
                    if(k!=100 && i!=100){
                        ans += pro[i][j][k] * (((double)i + (double)j + (double)k) - ((double)a + (double)b + (double)c));
                    }
                }
                if(k==100){
                    if(i!=100 && j!=100){
                        ans += pro[i][j][k] * (((double)i + (double)j + (double)k) - ((double)a + (double)b + (double)c));
                    }
                }
            }
        }
    }
    cout << setprecision(15);
    cout << ans << endl;

    //cout << pro[99][99][99] << endl;
    //cout << pro[100][99][99] * 2.0 << endl;
    //cout << pro[99][100][99] * 2.0 << endl;

}
