#include<stdio.h>
int main(){
  char a[100];
  scanf("%s",a);
  int c=1;
  for(int i=0;a[i]='\0';i++){
    if(a[i]==a[i+1]){
      c++;
    }
    else{
      printf("%d%c",c,a[i]);
      c=1;
    }
  }
  return 0;
}
