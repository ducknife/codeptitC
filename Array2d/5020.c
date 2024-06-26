#include <stdio.h>
#define ll long long
ll f[100];
void fibo(){
    f[0] = 0;
    f[1] = 1;
    for (ll i = 2; i <= 100; i++)
        f[i] = f[i - 1] + f[i - 2];
}
int main(){
        fibo();
        ll n;
        scanf("%lld", &n);
        ll a[n][n], run = 0, h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
        while (h1 <= h2 && c1 <= c2){
            for (ll i = c1; i <= c2; i++){
                a[h1][i] = f[run];
                run++;
            }
            h1++;
            for (ll i = h1; i <= h2; i++){
                a[i][c2] = f[run];
                run++;
            }
            c2--;
            if (h1 <= h2){
                for (ll i = c2; i >= c1; i--){
                    a[h2][i] = f[run];
                    run++;
                }
                h2--;
            }
            if (c1 <= c2){
                for (ll i = h2; i >= h1; i--){
                    a[i][c1] = f[run];
                    run++;
                }
                c1++;
            }
        }
        for (ll i = 0; i < n; i++){
            for (ll j = 0; j < n; j++) printf("%lld ", a[i][j]);
        printf("\n");
        }
    return 0;
}
