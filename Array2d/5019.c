#include <stdio.h>
#include <math.h>
int a[400];
int nt(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}
void snt(){
	a[0] = 2;
	a[1] = 3;
	int l = 2, i = 5;
	while (l < 400){
		if (nt(i)){
		a[l] = i;
		l++;
		}
		i+=2;
	}
}
int main(){
	snt();
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
        int n;
        scanf("%d", &n);
        int b[n][n], x = 0;
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
        while (h1 <= h2 && c1 <= c2){
            for (int i = c1; i <= c2; i++){
                b[h1][i] = a[x];
                x++;
            }
            h1++;
            for (int i = h1; i <= h2; i++){
                b[i][c2] = a[x];
                x++;
            }
            --c2;
            if (h1 <= h2){
                for (int i = c2; i >= c1; i--){
                    b[h2][i] = a[x];
                    x++;
                }
                --h2;
            }
            if (c1 <= c2){
                for (int i = h2; i >= h1; i--){
                    b[i][c1] = a[x];
                    x++;
                }
                c1++;
            }
        }
        printf("Test %d:\n", i);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) printf("%d ", b[i][j]);
        printf("\n");
        }
    }
}
