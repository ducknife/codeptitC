#include <stdio.h>
#include <math.h>
#define ll long long
ll dem[100] = {0};
ll nt(ll n){
    if (n < 2) return 0;
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}
int main(){
    ll n;
    scanf("%lld", &n);
    ll a[n][n];
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++) scanf("%lld", &a[i][j]);
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++)
            if (nt(a[i][j])) dem[i]++;
    ll max = 0, ind;
    for (ll i = 0; i < n; i++)
        if (dem[i] > max) max = dem[i];
    for (ll i = 0; i < n; i++)
        if (dem[i] == max){
            printf("%lld\n", i + 1);
            ind = i;
            break;
        }
    for (ll j = 0; j < n; j++)
        if (nt(a[ind][j])) printf("%lld ", a[ind][j]);
}
