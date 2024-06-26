#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n - i; j++) printf("~");
		int k = 1;
		for (int j = n - i + 1; j <= n; j++){
			printf("%d", k);
			k += 2;
		}
		for ( int j = 2*i - 3; j >= 1; j-=2 ) printf("%d", j);
		printf("\n");
	}
}
