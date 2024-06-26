#include <stdio.h>
int main(){
	int n;
	int jump;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		int k = i;
		jump = n - 1;
		for (int j = 1; j <= i; j++){
			printf("%c ", k + 64);
			if ( jump >= 1){
				k += jump;
				jump --;
			}
		}
		printf("\n");
	}
}
