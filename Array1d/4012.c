#include <stdio.h> //bài này test ảo lòi
int cnt[0] = {0}; //thay bàng cnt[0] vẫn đúng :))
int main(){
	int n; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    int num = 0;
    for (int i = 0; i < n; i++){
        if (cnt[a[i]] > 1){
            printf("%d ", a[i]);
            cnt[a[i]] = 0;
            num++;
        }
    }
    if (!num) printf("0");
}
