#include<stdio.h>
// recusrion using taylor series its consumes more number of multiplication

// double e(int x,int n){
//     static double p=1,f=1;
//     static double r;
//     if(n==0){
//         return 1;
//     }else{
//         r=e(x,n-1);
//         p=p*x;
//         f=f*n;
//         return r+p/f;
//     }
// }
// recursive approach can wrong i think
// double e(int x, int n){
//     double s=1;
//     for(;n>0;n--){
//         s=1+x*s/n;
//     }
//     return s;
// }
// recursion using iterative method
// double e(int x,int n){
//     double s=1;
//     double num =1;
//     double den =1;
//     for(int i=1;i<=n;i++){
        
//         num = num * x;
//         den = den * i;
//         s = s+num/den;
//     }
//     return s;
// }
//recusrion using less multiplication method with use of common out example its example like a honers rule

double e(int x,int n){
    static double s=1;
    if(n==0){
        return s;
        
    }else{
        s=1+x*s/n;
        return e(x,n-1);
    }
}

int main(){
    printf("%lf",e(2,15));
    return 0;
}




