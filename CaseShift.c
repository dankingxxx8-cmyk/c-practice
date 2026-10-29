   #include <stdio.h>

   int main(void){
    char lower,upper;
    printf("Enter a lowercase letter: ");
    scanf("%c",&lower);
    upper=lower-32;
    printf("%c %d %d\n",upper,upper,lower);
    return 0;
   }