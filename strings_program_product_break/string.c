#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    char b[10];
    scanf("%s",a);
    scanf("%s",b);
    int index=-1;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==b[0]){
            index=i;
            for(int j=1;b[j]!='\0';j++){
                if(i+j>=strlen(a) || a[i+j] != b[j])
                    index=-1;
                    break;
            }
            if(index!=-1){
                break;
            }
        }
    }
    
    if(index!=-1){
        printf("%d",index);
    }
    else{
        printf("%d",index);
    }
}