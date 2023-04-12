#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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
int max(struct Node *p){
    int m=  INT_MIN;
    while(p!=NULL){
        if(p->data>m){
            m=p->data;
        }
        p=p->next;
    }
    return m;
}

//recursive approach
int maxrec(struct Node *p){
    int m=INT_MIN;
    int x=0;
    if(p==0){
        return m;
    }
    else{
        x=maxrec(p->next);
        if(x>p->data){
            return x;
        }
        else{
            return p->data;
        }
    }
}
void display(struct Node *p){
    while(p!=NULL){
        printf(" %d",p->data);
        p=p->next; //traverse the data in an array
    }
}

int main(){
    int a[] = {12,3,4,5,6};
    create(a,5);
    display(first);

    printf("\n%d",max(first));
    printf("\n%d",maxrec(first));

    return 0;
}
