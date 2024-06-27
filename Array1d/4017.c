#include <stdio.h>
#include <math.h>
int nt(int a){
	if (a < 2) return 0;
    for (int i = 2; i <= sqrt(a); i++)
        if (a % i == 0) return 0;
    return 1;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n], cnt = 0;;
	for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if (nt(a[i])) cnt++;
    }
    printf("%d ", cnt);
    for (int i = 0; i < n; i++){
        if (nt(a[i])) printf("%d ", a[i]);
    }
}
