#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++){ // xây dựng từ hàng 0 -> n
        for (int j = 0; j < n; j++){ // xây dựng nửa trái
            if (j < i) printf("%d", n - j);
            else printf("%d", n - i);
        }
        if (i == 0){ // xây dựng nửa phải hàng 0
            for (int j = n; j < 2*n - 1; j++) printf("%d", n - i);
        }
        else if (i == n - 1){ //xây dựng nửa phải hàng n - 1
            int k = n - i + 1;
            for (int j = n; j < 2*n - 1; j++){
                printf("%d", k);
                k++;
            }
        }
        else { // xây dựng nửa phải các hàng còn lại
            int k = n - i; 
            for (int j = n; j < 2*n - i - 1; j++) printf("%d", k);
            for (int j = 2*n - i - 1; j < 2*n - 1; j++){
                printf("%d", k + 1);
                k++;
            }
        }
        printf("\n");
    }
    for (int i = 0; i < n - 2; i++){ // xây dựng phía dưới
        int a[n], k = 0;
        for (int j = 0; j < n; j++){
            if (j < n - i - 1) {
                printf("%d", n - j);
                a[k] = n - j; k++; // tạo mảng để lưu các phần tử bên trái
            }
            else {
                printf("%d", i + 2);
                a[k] = i + 2; k++; // tạo mảng để lưu các phần tử bên trái
            }
        }
        int l = k - 2;
        for (int i = n; i < 2*n - 1; i++){
            printf("%d", a[l]); // in các phần tử bên phải 
            l--;
        }
        printf("\n");
    }
    for (int i = 0; i < 2*n - 1; i++) printf("%d", n); // xây dựng hàng cuối cùng
}
 
