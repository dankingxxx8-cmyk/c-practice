#include <stdio.h>

   int main(void){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=i;j<=9;j++){
        if(((i*j)/10)%10){
            printf("%d*%d=%d",i,j,i*j);
        }
        else{
            printf("%d*%d= %d",i,j,i*j); 
        }
        if(j!=9){
            printf("  ");
        }
        }
    printf("\n");

    }
    return 0;
   }