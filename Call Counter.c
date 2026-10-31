#include <stdio.h>
int counter_normal();
int counter_static();

int main(int){
    int a1,a2,a3;
    int b1,b2,b3;
    a1=counter_normal();
    a2=counter_normal();
    a3=counter_normal();
    b1=counter_static();
    b2=counter_static();
    b3=counter_static();
    printf("normal:%d %d %d\n",a1,a2,a3);
    printf("static:%d %d %d\n",b1,b2,b3);
    return 0;
}
int counter_normal(){
    int a=0;
    a+=1;
    return a;
}
int counter_static(){
    static int b=0;
    b+=1;
    return b;
}
