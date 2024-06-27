#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return *x - *y;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	int le[n], chan[n], run1 = 0, run2 = 0;
	for (int i = 0; i < n; i++){
		if (a[i] % 2 == 0){
			chan[run1++] = a[i];
		}
		else {
			le[run2++] = a[i];
		}
	}
	qsort(le, run2, sizeof(int), cmp);
	qsort(chan, run1, sizeof(int), cmp);
	for (int i = 0; i < run1; i++) printf("%d ", chan[i]);
	for (int i = 0; i < run2; i++) printf("%d ", le[i]);
    return 0;
}
