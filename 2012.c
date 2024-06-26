#include <stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	if (n <= m){
		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j >= 1; j--) printf("%d", j);
			int k = 2; 
			for (int j = i + 1; j <= m; j++){
				printf("%d", k);
				k++;
			}
			printf("\n");
		}
	}
	else{
		for (int i = 1; i <= m; i++){
			for (int j = i; j >= 1; j--) printf("%d", j);
			int k = 2; 
			for (int j = i + 1; j <= m; j++){
				printf("%d", k);
				k++;
			}
			printf("\n");
		}
		for (int i = m + 1; i <= n; i++)
		{
			printf("%d", i);
			int k = i - 1;
			for (int j = 2; j <= m; j++){
				printf("%d", k);
				k--;
			}
			printf("\n");
		}
	}
}
