#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	int r = 1;
	while ( t -- ){
		int n, m, k;
		scanf("%d%d%d", &n, &m, &k);
		int a[n + m], b[m];
	    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
	    printf("Test %d:\n", r);
	    for (int i = 0; i < n + m; i++){
	        if (i < k) printf("%d ", a[i]);
	    }
	    int j = 0, t = k;
	    for (int i = k; i < k + m; i++) printf("%d ", b[j++]);
	    for (int i = k + m; i < n + m; i++)
		    printf("%d ", a[t++]);
	    printf("\n");
	    r++;
	}
	return 0;
}
