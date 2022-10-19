#include<stdio.h>
int func(int n){
    static int x=0;
    if(n>0){
        x++;
        // for(int i=1;i<=n;i++)
        //   printf("%d",i);
         return func(n-1)+x;
    //int a= func(n-1)+x;//555550
    // for(int i=0;i>=func(n-1);i++)
    //   printf("%d",i);
    }
    return 0;
}
int main(){
//   for(int i=0;i>=4;i++)
    printf("%d",func(5));
    return 0;
}
