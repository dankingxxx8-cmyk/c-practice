#include <stdio.h>
int find_max(int a[],int n){
   int max=a[0];
   for(int i=0;i<n;i++){
     if(a[i]>max){
        max=a[i];
     }
   }
   return max;
}
int find_min(int a[],int n){
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int sum_array(int a[],int n){
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
    int max = find_max(a, n);
    int min = find_min(a, n);
    int sum = sum_array(a, n);
    double avg = (double)sum / n; 

    printf("最大值:%d 最小值:%d 总和:%d 平均值:%.2f\n", max, min, sum, avg);
    return 0;
}