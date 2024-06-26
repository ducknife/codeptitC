#include <stdio.h>
void test(){
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	int ok = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] != a[n - 1 - i]) {
		    ok = 0;
		    break;
		}
	}
	if (ok) printf("YES\n");
	else printf("NO\n");
}


int main(){
	int t;
	scanf("%d", &t);
	while (t--){
	    test();
	}
	return 0;
}
