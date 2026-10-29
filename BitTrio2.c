#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    /*左移 n << k 相当于乘以 2 的 k 次方
      右移 n >> k 相当于除以 2 的 k 次方(向下取整)*/
    printf("%d %d\n", n << 3, n >> 2);   
    return 0;
}