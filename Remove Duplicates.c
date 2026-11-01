#include <stdio.h>
int len_z(int a[],int n){
    if(n==0){
        return 0;
    }
    int k=0;
    for(int i=1;i<n;i++){
        if(a[i]!=a[k]){
            a[k+1]=a[i];
            k+=1;
        }
    }
    return k+1;
}
int main(void){
    int num;
    int a[100];
    scanf("%d",&num);
    for(int q=0;q<num;q++){
        scanf("%d",&a[q]);
    }
    int len=len_z(a,num);
    for(int l=0;l<len;l++){
        printf("%d ",a[l]);
    }
    return 0;
}