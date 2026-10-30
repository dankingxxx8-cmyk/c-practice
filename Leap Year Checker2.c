#include <stdio.h>
int is_leap(int y){
    if(y%4==0&&y%100!=0||y%400==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void){
    int y;
    scanf("%d",&y);
    if (y<1||y>9999){
        printf("输入非法\n");
    }
    else{
        if (is_leap(y)){
            printf("%d年是闰年\n",y);
        }
        else{
            printf("%d年不是闰年\n",y);
        }
    }
    return 0;
}