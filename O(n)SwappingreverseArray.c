#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void reverse(int a[],int n){
    int i,j;
     for(i=0,j=n-1;i<j;i++,j--){
        if(i!=j){
            swap(&a[i],&a[j]);
        }
    }
}
int main(){
    int a[10];
    int n=10;
    //type1
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    // printf("Hello world");
    //reverse an array
    reverse(a,n);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    } 
    return 0;
   
}
