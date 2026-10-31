#include <stdio.h>

void get_min_max(int a, int b, int *min, int *max);

int main(void) {
    int a, b;
    int mn, mx;
    scanf("%d %d", &a, &b);

    get_min_max(a, b, &mn, &mx);
    printf("min=%d max=%d\n", mn, mx);

    return 0;
}

void get_min_max(int a, int b, int *min, int *max) {
    if (a <= b) {
        *min = a;
        *max = b;
    } else {
        *min = b;
        *max = a;
    }
}