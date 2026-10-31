#include <stdio.h>
void swap_by_value(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
}
void swap_by_pointer(int *p,int *q){
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    swap_by_value(a,b);/*在函数中可以交换值 但是并不能返回值*/
    printf("a=%d,b=%d\n",a,b);
    swap_by_pointer(&a,&b);/*指针指向的是地址 交换地址后 返回值*/
    printf("a=%d,b=%d",a,b);
    return 0;
}