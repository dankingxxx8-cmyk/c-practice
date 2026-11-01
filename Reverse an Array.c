#include <stdio.h>
void reverse(int a[],int n){
    for(int i=0;i<n-1-i;i++){
        int t;
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
}
int main(void){
    int a[100];
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    reverse(a,num);
    for(int i=0;i<num;i++){
        if(i<num-1){
            printf("%d ",a[i]);
        }
        else{
            printf("%d\n",a[i]);
        }
    }
    return 0;
}