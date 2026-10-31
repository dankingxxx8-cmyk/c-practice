#include <stdio.h>
long long factorial(long long n);
long long sum_p(long long x);

int main(void){
    int a;
    scanf("%d",&a);
    printf("%d!=%lld sum %d=%lld",a,factorial(a),a,sum_p(a));
    return 0;
}
long long factorial(long long n){
    if(n<=0){
        return 1;
    }
    return n*factorial(n-1);
    
}
long long sum_p(long long x){
    if(x<0){
        return 0;
    }
    return x+sum_p(x-1);
}