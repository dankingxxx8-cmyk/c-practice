#include <stdio.h>
int is_narcissistic(int n){
    if (n==(n%10) * (n%10) * (n%10) + ((n/10)%10) * ((n/10)%10) * ((n/10)%10) + (n/100) * (n/100) * (n/100)){
        return 1;
    }
    else{
        return 0;
    }
}
   int main(void){
    int n,i=0;
    for(n=100;n<=999;n++){
        if (is_narcissistic(n)==1){
            printf("%d ",n);
            i+=1;
        }
        else
        continue;
    }
    printf("%d",i);
    return 0;
   }