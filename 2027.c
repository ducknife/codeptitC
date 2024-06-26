#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int k = 1, a[n][n]; 
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++){
			a[i][j] = k;
			k++;
		}
		if (i % 2 == 1){
			for (int j = i; j >= 0; j--) printf("%c ", a[i][j] + 96);
		}
		else {
			for (int j = 0; j <= i; j++) printf("%c ", a[i][j] + 96);
		}
		printf("\n");
	}
}
