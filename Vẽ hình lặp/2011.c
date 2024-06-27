#include <stdio.h>
int main(){
    int h, c;
    scanf("%d%d", &h, &c);
    if (h <= c)
        for (int i = 1; i <= h; i++){
            for (int j = i; j <= c; j++) printf("%d", j);
            int k = c - 1;
            for (int j = c - i + 2; j <= c; j++){
                printf("%d", k);
                k--;
            }
            printf("\n");
        }
    else {
        for (int i = 1; i <= c; i++){
            for (int j = i; j <= c; j++) printf("%d", j);
            int k = c - 1;
            for (int j = c - i + 2; j <= c; j++){
                printf("%d", k);
                k--;
            }
            printf("\n");
        }
        for (int i = c + 1; i <= h; i++){
            for (int j = i; j >= i - c + 1; j--) printf("%d", j);
            printf("\n");
        }
    }
}
