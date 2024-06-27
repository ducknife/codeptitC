#include <stdio.h>
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    if (n <= m){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (j < i) printf("%c", m - j + 96);
                else printf("%c", m - i + 96);
            }
            printf("\n");
        }
    }
    else {
        for (int i = 0; i < m; i++){
            for (int j = 0; j < m; j++){
                if (j < i) printf("%c", n - j + 96);
                else printf("%c", n - i + 96);
            }
            printf("\n");
        }
        for (int i = m; i < n; i++){
            for (int j = 0; j < m; j++){
                printf("%c", n - j + 96);
            }
            printf("\n");
        }
    }
}
