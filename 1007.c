#include<stdio.h>
#define ll long long
int main(){
    ll a,b;
    scanf("%lld%lld", &a, &b);
    if(b > 0){
      ll tong=a+b, hieu=a-b, du=a%b, nguyen = a/b;
      ll tich=a*b;
      float thuong=1.0*a/b;
      printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2f", tong, hieu, tich, nguyen, du, thuong);
    }
    return 0;
}
