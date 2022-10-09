#include<stdio.h>

void recursion(int x){
      if(x>0){
		
	printf("%d",x);
	recursion(x-1);

     }
}
int main(){

    recursion(5);

}