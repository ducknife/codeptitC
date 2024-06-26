#include <stdio.h>
#define ll long long
int main(){
    ll hang, cot, cot2, cot3;
    scanf("%lld%lld%lld%lld", &hang, &cot, &cot2, &cot3);
    ll a[hang][cot], b[cot][cot2], c[cot2][cot3], d[hang][cot2], e[hang][cot3];
    for (ll i = 0; i < hang; i++) 
        for (ll j = 0; j < cot; j++) scanf("%lld", &a[i][j]);
    for (ll i = 0; i < cot; i++) 
        for (ll j = 0; j < cot2; j++) scanf("%lld", &b[i][j]);
    for (ll i = 0; i < cot2; i++) 
        for (ll j = 0; j < cot3; j++) scanf("%lld", &c[i][j]);
    for (ll i = 0; i < hang; i++){
        for (ll j = 0; j < cot2; j++){
            d[i][j] = 0;
            for (ll l = 0; l < cot; l++) d[i][j] += a[i][l] * b[l][j];
        }
    }
    for (ll i = 0; i < hang; i++){
        for (ll j = 0; j < cot3; j++){
            e[i][j] = 0;
            for (ll l = 0; l < cot2; l++) e[i][j] += d[i][l] * c[l][j];
        }
    }
    for (ll i = 0; i < hang; i++){
        for (ll j = 0; j < cot3; j++) printf("%lld ", e[i][j]);
    printf("\n");
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
}
