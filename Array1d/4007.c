#include <stdio.h>
int main(){
	int n, m, k;
	scanf("%d%d", &n, &m);
	int a[n + m], b[m];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < m; i++) scanf("%d", &b[i]);
	scanf("%d", &k);
	for (int i = 0; i < n + m; i++){
	    if (i < k) printf("%d ", a[i]);
	}
	int j = 0, t = k;
	for (int i = k; i < k + m; i++) printf("%d ", b[j++]);
	for (int i = k + m; i < n + m; i++) printf("%d ", a[t++]);
	return 0;
}
