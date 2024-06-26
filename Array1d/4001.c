#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d\n", &n);
	    int b[n];
	    for(int i=0;i<n;i++) scanf("%d", &b[i]);
	    for(int i=0;i<n;i++){
		   if(b[i]%2==0)
			  printf("%d ", b[i]);
	    }
	    printf("\n");	
    }
}
