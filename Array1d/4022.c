#include <stdio.h>
#include <math.h>
#define ll long long
int main(){
	int n;
	scanf("%d\n", &n);
		ll a[100], max1 = -1e9, max2 = -1e9;;
		for (int i = 0; i < n; i++){
            scanf("%lld", &a[i]);
            max1 = fmax(max1, a[i]);
        }
		for (int i = 0; i < n; i++){
		    if ( a[i] > max2 && a[i] != max1){
		        max2 = a[i];
		    }
		}
		printf("%lld %lld", max1, max2);
}
