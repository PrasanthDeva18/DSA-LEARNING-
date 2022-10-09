#include<stdio.h>

int func(int n){
static int x=0;
if(n>0){    
	x++;
	return func(n-1)+x;
}
	return 0;
}
int main(){
   printf("%d",func(5));
}

//output:25
