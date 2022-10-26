#include<stdio.h>

//or using static keyword instead of globally we declare
int sum(int n){
    // static int natural=0; 
    if(n==0){
        return 0;
        // printf("%d",natural);
        // return ;//when we kill the line of code we put return statement definetely
    }
    //method 1
    return sum(n-1)+n;
    //method2 it is efficient and consume less time to execution
    // return n*(n+1)/2;
    //method3 justfor fun
    // natural += n;
    // sum(--n);
}
int main(){
    printf("%d",sum(5));
    // sum(5);
    return 0;
}
