#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
    int *x = (int *)a;
    int *y = (int *)b;
    return *x - *y;
}
void inp(int a[], int n){
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
}
void out2(int a[], int n){
    for (int i = 0; i < n - 1; i++) printf("%d ", a[i]);
    printf("%d", a[n - 1]);
}
void out(int a[], int n){
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
}
void out1(int a[], int n){
    for (int i = n - 1; i > 0; i--) printf("%d ", a[i]);
    printf("%d", a[0]);
}
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int a, b;
        char c;
        scanf("%d%d %c", &a, &b, &c);
        int x[a], y[b], z[a + b], k = 0;
        inp(x, a); inp(y, b);
        for (int i = 0; i < a; i++) z[i] = x[i];
        for (int i = a; i < a + b; i++){
            z[i] = y[k];
            k++;
        }
        qsort(z, a + b, sizeof(int), cmp);
        switch(c){
            case 'T':
                out2(z, a + b);
                break;
            case 'G':
                out1(z, a + b);
                break;
            case 'A':
                out(y, b); out2(x, a);
                break;
            case 'F': 
                out(x, a); out2(y, b);
                break;
        }
        printf("\n");
    }
}
