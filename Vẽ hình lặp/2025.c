#include <stdio.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	if (n <= m){
		for (int i = 1; i <= n; i++){
			int k = i - 1;
			for (int j = 1; j <= m + 1 - i; j++){
				if (k <= m - 1){
					printf("%c", k + 64);
					k++;
				}
			}
			for ( int j = m + 2 - i; j <= m; j++) printf("%c", m + 63);
			printf("\n");
		}
	}
	else{
		for (int i = 1; i <= m; i++){
			int k = i - 1;
			for (int j = 1; j <= m + 1 - i; j++){
				if (k <= m - 1){
					printf("%c", k + 64);
					k++;
				}
			}
			for (int j = m + 2 - i; j <= m; j++) printf("%c", m + 63);
			printf("\n");
		}
		for (int i = m + 1; i <= n; i++){
			for ( int j = 1; j <= m; j++) printf("%c", m + 63);
			printf("\n");
		}
	}
}
