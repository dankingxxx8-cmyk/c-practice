#include <stdio.h>
long long gcd(long long a, long long b){
    long long c;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
return a;
}
long long lcm(long long x,long long y){
    x=(y/gcd(x,y))*x;
    return x;
}
int main(void){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("最大公约数:%lld 最小公倍数:%lld\n",gcd(a,b),lcm(a,b));
    return 0;
}