#include <stdio.h>

 int main(void){
    int a,b;
     scanf("%d %d",&a,&b);
     printf("a+b=%d\n",a+b);        
     printf("a-b=%d\n",a-b);
     printf("a*b=%d\n",a*b);
     printf("a/b=%d\n",a/b);
     printf("a%%b=%d\n",a%b);
     printf("a/b=%.2f\n",(float)a/(float)b);
    return 0;
 }