   #include <stdio.h>

   int main(void){
    int x,a,b,c;
    printf("Enter a number: \n");
    scanf("%d", &x);
    a=x/100;
    b=(x/10)%10;
    c=x%10;
    printf("The digits are: %d, %d, %d\n", a, b, c);

    return 0;
   }