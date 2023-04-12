#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first=NULL;
void create(int a[],int n){
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
//recursive display of the linked list
void display(struct Node *p){
    if(p!=NULL){
        display(p->next);
        printf("%d ",p->data);
        // display(p->next);
    }
}
int main(){
    int a[]={1,2,3,4,5};
    create(a,5);
    display(first);
    return 0;

}