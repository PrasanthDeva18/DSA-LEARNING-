//write a program to reverse the word
//i/p : i love code
//o/p : code love i
#include<stdio.h>
int main(){
     char a[100];
    scanf("%[^\n]",a);
    char b[100][100];
    int c=0,w=0;
    int i;
    for(i=0;a[i]!='\0';i++){
       if(a[i]!=32){
           b[w][c++]=a[i];
       }
       else{
           b[w][c]=0;
           c=0;
           w++;
       }
    }
    b[w][c]=0;
    
    //printf("%d",w);
    for(i=w;i>=0;i--){
        printf("%s ",b[i]);
    }
    printf("\b");
    return 0;
}
