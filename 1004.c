#include<stdio.h>
#define ll long long
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        if(n > 0){
        double a = 1 / (1.0*n);
        printf("%.15lf\n",a);
        }
    }
    return 0;
}
