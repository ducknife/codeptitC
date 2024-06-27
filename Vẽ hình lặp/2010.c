#include <stdio.h>
int main(){
    int h, c;
    scanf("%d%d", &h, &c);
    if (h <= c)
        for (int i = 1; i <= h; i++){
            for (int j = i; j <= c; j++) printf("%d", j);
            for (int k = i - 1; k >= 1; k--) printf("%d", k);
            printf("\n");
        }
    else {
        for (int i = 1; i <= c; i++){
            for (int j = i; j <= c; j++) printf("%d", j);
            for (int k = i - 1; k >= 1; k--) printf("%d", k);
            printf("\n");
        }
        for (int i = c + 1; i <= h; i++){
            printf("%d", i);
            for (int j = c - 1; j >= 1; j--) printf("%d", j);
            printf("\n");
        }
    }
}
