#include <stdio.h>
#include <math.h>
int nt(int a){
	if (a < 2) return 0;
	for (int i = 2; i <= sqrt(a); i++)
		    if(a%i==0) return 0;
	return 1;
}
int main(){
	int n;
	scanf("%d", &n );
	int sum = 0;
	int a[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = i; j < n; j++){
			if (nt(a[i][j])) sum += a[i][j];
		}
	}
	printf("%d", sum);
	return 0;
}
