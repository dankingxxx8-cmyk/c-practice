 #include <stdio.h>

   int main(void)  {
    int a,b;
    scanf("%d %d",&a,&b);
    /*把数化成二进制竖向比较，相同为零，不同为一
      5  101
      3  011
      -------
      6  110                             */
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d\n",a,b);
    return 0;
   }