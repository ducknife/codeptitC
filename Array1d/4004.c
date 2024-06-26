#include <stdio.h>
#define ll long long 
ll hung(int n){
	if(n==1||n==2) return 1;
	ll f, f1= 1, f2=1;
	for (int i = 3; i <= n; i++){
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	return f;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		printf("%lld\n",hung(a));
	}
	return 0;
}
