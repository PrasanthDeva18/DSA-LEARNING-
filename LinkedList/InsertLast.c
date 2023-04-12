#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first = NULL;
void insertLast(int x){
    struct Node *t,*last;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=last=t;
    }
    else{
        last->next=t;
        last=t;
    }
}
void display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(){
    insertLast(1);
    insertLast(2);
    insertLast(3);

    display(first);

    return 0;

}