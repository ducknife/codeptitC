#include <stdio.h>
#include <math.h>
#define maxN 100005
int prime[maxN];
int cnt[100005] = {0};
void IsPrime(){
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i <= maxN; i++) prime[i] = 1;
    for (int i = 2; i * i <= maxN; i++){
        if (prime[i]){
            for (int j = i * i; j <= maxN; j += i){
                prime[j] = 0;
            }
        }
    }
}
int main(){
    IsPrime();
    int t; scanf("%d", &t);
    for (int k = 1; k <= t; k++){
        int n; scanf("%d", &n);
        int a[n], max = -1e9;
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            max = fmax(max, a[i]);
            if (prime[a[i]]) cnt[a[i]]++;
        }
        printf("Test %d:\n", k);
        for (int i = 0; i <= max; i++){
            if (cnt[i] >= 1){
                printf("%d xuat hien %d lan\n", i, cnt[i]);
                cnt[i] = 0;
            }
        }
    }
}
