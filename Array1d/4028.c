#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i  = 0; i < n; i++) scanf("%d", &a[i]);
	int k = 0;
	for (int i = 0; i < n; i++){
		int p = i - 1, val = a[i];
		while(p >= 0 && val < a[p]){
			a[p + 1] = a[p];
			--p;
		}
		a[p + 1] = val;
		printf("Buoc %d: ", k);
		for(int i=0;i<k+1;i++) printf("%d ", a[i]);
		printf("\n");
		k++;
	}
}
