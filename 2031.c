#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		int k = n - i;
		for (int j = 1; j <= n + 1 - i; j++){
			if (k <= 2 * k){
			    printf("%c", k + 64);
			    k++;
			}
		}
		printf("\n");
	}
}
