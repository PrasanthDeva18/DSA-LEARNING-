#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first=NULL;
void create(int a[],int n){
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
struct Node *search(struct Node *p,int key){
    struct Node *q;
    while(p!=NULL){
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
int main(){
    struct Node *temp;
    int a[]={1,2,3,4,5};
    // printf("HIII");
    create(a,5);
    temp=search(first,3);
    printf("%d",temp->data);
    return 0;
    
}