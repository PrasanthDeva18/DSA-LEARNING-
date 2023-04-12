#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create(int a[],int n){
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int count(struct Node *p){
        int c=0;
        while(p!=NULL){
            c++;
            p=p->next;
        }

        return c;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); 
    }

    create(a,n);
    printf("count of present nodes %d ",count(first));
    return 0;
}