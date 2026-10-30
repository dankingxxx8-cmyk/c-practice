#include <stdio.h>

   int main(void){
    int s;
    scanf("%d",&s);
    if(s<0||s>100){
        printf("输入非法。\n");
    }
    else{
        switch (s/10){
            case 10:
            case 9:printf("A\n");break;
            case 8:printf("B\n");break;
            case 7:printf("C\n");break;
            case 6:printf("D\n");break;
            default:printf("E\n");break;
        }
    }
    return 0;
   }