#include<stdio.h>
int recursion(int x){
  if(x>0){
    recursion(x-1);
    printf("%d",x);
  }
}
int main(){
  recursion(5); 
}
