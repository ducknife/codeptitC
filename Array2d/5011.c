#include <stdio.h>
#define ll long long
ll main(){
    ll t; scanf("%lld", &t);
    for (ll k = 1; k <= t; k++){
        ll n, m;
        scanf("%lld%lld", &n, &m);
        ll a[n][m], b[n][n];
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < m; j++) scanf("%lld", &a[i][j]);
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < n; j++){
                b[i][j] = 0;
                for (ll l = 0; l < m; l++)
                    b[i][j] += a[i][l] * a[j][l];
            }
        printf("Test %lld:\n", k);
        for (ll i = 0; i < n; i++){
            for (ll j = 0; j < n; j++) printf("%lld ", b[i][j]);
        printf("\n");
        }
    }
}
