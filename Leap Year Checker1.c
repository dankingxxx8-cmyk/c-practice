#include <stdio.h>

int main(void){
    int y;
    scanf("%d",&y);
    if (y<1||y>9999){
        printf("输入非法\n");
    }
    else{
        if ((y%4==0&&y%100!=0)||y%400==0){
            printf("%d年是闰年\n",y);
        }
        else{
            printf("%d年不是闰年\n",y);
        }
    }
    return 0;
}
/*不用函数一版*/