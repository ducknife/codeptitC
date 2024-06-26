#include <stdio.h>

int main(){
	int n, m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int c1, c2;
	scanf("%d%d", &c1, &c2);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (j == c1-1) printf("%d ", a[i][c2-1]);
			else if (j == c2-1) printf("%d ", a[i][c1-1]);
			else printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
