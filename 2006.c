#include <stdio.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for ( int i = 0; i < n; i++){
		for ( int j = 0; j < i; j++) printf("~");
		for (int j = i; j < i + m; j++ ){
			if (j == i || j == i + m - 1 || i == 0 || i == n-1) printf("*");
			else printf(".");
		}
		printf("\n");
	}
}
