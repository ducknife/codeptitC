#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (j == i) printf("%d ", a[i][n-1-i]);
			else if (j == n-i-1) printf("%d ", a[i][i]);
			else printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
