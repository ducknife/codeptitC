#include <stdio.h>
int dem[100001] = {0};
int main(){
	int t;
	scanf("%d", &t);
	for (int k = 1; k <= t; k++){
	    int n;
	    scanf("%d", &n);
	    int a[n];
	    for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dem[a[i]]++;
	    }
	    printf("Test %d:\n", k);
	    for (int i = 0; i < n; i++){
		if (dem[a[i]] >= 1){
		   printf("%d xuat hien %d lan\n", a[i], dem[a[i]]);
		   dem[a[i]] = 0;
            	}
	    }
	}
}
