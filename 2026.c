#include <stdio.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	if (n <= m){
	    for (int i = 1; i <= n; i++){
		    int k = n + 1 - i;
		    for (int j = 1; j <= m; j ++){	
			    if (k < m ){
			        printf("%c", k + 64);
			        k++;
			    }
			    else printf("%c", m + 64);
		    }
		    printf("\n");
	    }
	}
	else{
		for (int i = 1; i <= n - m; i++){
			for (int j = 1; j <= m; j++) printf("%c", m + 64);
			printf("\n");
		}
		for (int i = n - m + 1; i <= n; i++){
			int k = n + 1 - i;
			for (int j = 1; j <= m; j ++){	
                if (k < m ){
					printf("%c", k + 64);
					k++;
				}		
				else {
					printf("%c", m + 64);
				}
			}
		    printf("\n");
		}
	}
}
