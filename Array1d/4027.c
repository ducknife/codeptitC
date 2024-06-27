#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i  = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int k = 1;
	for (int i = 0; i <= n - 2; i++){
		int min_p = i;
		for (int j = i + 1; j < n; j++){
			if( a[j] < a[min_p] ) min_p=j;
		}
		int tmp = a[i];
		a[i] = a[min_p];
		a[min_p] = tmp;
		printf("Buoc %d: ", k);
		for(int i=0;i<n;i++) printf("%d ", a[i]);
		printf("\n");
		k++;
	}
}
