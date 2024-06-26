#include <stdio.h>
#include <math.h>
#define ll long long
#define maxN 10000005
int prime[maxN];
void isprime(){
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
    isprime();
    int t; scanf("%d", &t);
    while (t--){
        int n; scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        for (int i = 0; i < n; i++) 
            if(prime[a[i]]) printf("%d ", a[i]);
        printf("\n");
    }
}
