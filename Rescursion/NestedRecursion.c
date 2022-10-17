#include<stdio.h>
void func(int n){
    if(n>100){
        return n-10;
    }
    return func(func(n+11));
}
int main(){
    int r=func(99);
    printf("%d\n",r);
    return 0;
}

Nested Recursion is defined as a recursion inside the recursion is called nested recursion
