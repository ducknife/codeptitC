#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n - 1; i++){
		int check = 0;
		for(int j = 0;j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				int tmp = a[j + 1];
				a[j + 1]=a[j];
				a[j]=tmp;
                check = 1;
			}
		}
        if (!check) break;
		printf("Buoc %d: ", i + 1);
		for(int i = 0; i < n; i++) printf("%d ", a[i]);
		printf("\n");
	}
}
