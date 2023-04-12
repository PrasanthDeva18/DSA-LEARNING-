#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
} *first = NULL;

void create(int a[],int n){
    int i;
    struct Node *t,*last;
    first = (struct Node *) malloc(sizeof(struct Node));
    first->data = a[0];
    first->next = NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next = t;
        last =t;
    }
}

int sum(struct Node *p){
    int sum=0;
    while(p!=NULL){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int sumrec(struct Node *p){
    if(p==0){
        return 0;
    }

    return sum(p->next)+p->data;
}
void display(struct Node *p){
    while(p!=NULL){
        printf(" %d",p->data);
        p=p->next; //traverse the data in an array
    }
}

int main(){
    int a[] = {1,2,3,4,5};
    create(a,5);
    display(first);
    printf("\n%d",sum(first));
    printf("\n%d",sumrec(first));
    return 0;
}