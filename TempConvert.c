#include <stdio.h>

int main(void) {
    double C, F;
    printf("请输入摄氏温度: ");
    scanf("%lf", &C);
    F = C * 9 / 5 + 32;
    printf("华氏温度为: %.2f\n", F);
    return 0;
}