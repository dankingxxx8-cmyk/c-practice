#include <stdio.h>
int max_h(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}
int num_h(int a[],int n){
   int max=max_h(a,n);
   for(int i=0;i<n;i++){
    if(a[i]==max){
        return i;
    }
   }
   return 0;
}
int min_h(int a[],int n){
    int min=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}
int sum_h(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int main(void){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=max_h(a,n);
    int min=min_h(a,n);
    int sum=sum_h(a,n);
    int num=num_h(a,n);
    double avg = (double)sum_h(a,n) / n;
    printf("max:%d min:%d avr:%.2f first:%d\n", max, min, avg,num);
    return 0;
}
