#include <stdio.h>
int dem[0] = {0};
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dem[a[i]]++;
	}
    int num = 0, b[n], run = 0;
	for (int i = 0; i < n; i++){
		if(dem[a[i]] == 1){
			num++;
            b[run++] = a[i];
            dem[a[i]] = 0;
		}
	}
	printf("%d\n", num);
	for (int i = 0; i < run; i++) printf("%d ", b[i]);
}
