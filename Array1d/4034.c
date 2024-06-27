#include <stdio.h>
int dem[100005] = {0};
int main(){
	int t; scanf("%d", &t);
	while (t--){
		int n; scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			dem[a[i]]++;
		}
		for (int i = 0; i < n; i++){
			int ok = 1;
			for (int j = i + 1; j < n; j++){
				if (a[j] > a[i]){
					ok = 0;
					break;
				}
			}
			if (ok && dem[a[i]] >= 1){
				printf("%d ", a[i]);
				dem[a[i]] = 0;
			}
		}
		printf("\n");
	}
}
