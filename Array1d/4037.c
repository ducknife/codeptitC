#include <stdio.h>
int cnt[100001] = {00};
int main(){
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		cnt[a[i]]++;
	}
	int num = 0, run = 0;
	for (int i = 0; i < n; i++){
		if(cnt[a[i]] > 1){
			b[run++] = a[i];
			num++;
			cnt[a[i]] = 0;
		}
	}
	printf("%d\n", num);
	for (int i = 0; i < run; i++) printf("%d ", b[i]);
}
