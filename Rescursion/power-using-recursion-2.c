#include<stdio.h>
int power(int m,int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
         return power(m*m,n/2);
    }
    else{
        return power(m*m,(n-1)/2)*m;
    }
   
}
int main(){
    
    printf("%d",power(2,9));
    return 0;
    
}

o/p

512
