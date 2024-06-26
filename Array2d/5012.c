#include <stdio.h>
#define ll long long
int main(){
    ll t; scanf("%lld", &t);
    for (ll i = 1; i <= t; i++){
        ll n; scanf("%lld", &n);
        ll a[n][n], b[n][n], k = 1;
        for (ll i = 0; i < n; i++){ //gan phan tu cho a;
            for (ll j = 0; j < n; j++){
                if (j <= i){
                    a[i][j] = k;
                    k++;
                }
                else a[i][j] = 0;
            }
            k = 1;
        }
    for (ll i = 0; i < n; i++){ //batdau nhan;
        for (ll j = 0; j < n; j++){
            b[i][j] = 0;
            for (ll l = 0; l < n; l++)
                b[i][j] += a[i][l] * a[j][l];
        }
    }
    printf("Test %lld:\n", i);
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < n; j++) printf("%lld ", b[i][j]);
    printf("\n");
    }
    }
}
