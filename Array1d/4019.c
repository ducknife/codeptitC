#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		int a[n];
		int dem[100] = {};
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			dem[a[i]]++;
		}
		int max = 0;
		for (int i = 0; i < n; i++){
			max = fmax(max, dem[a[i]]);
		}
		for (int i = 0; i < n; i++){
			if (dem[a[i]] == max){
				printf("%d ", a[i]);
				dem[a[i]] = 0;
			}
		}
		printf("\n");
	}
}
