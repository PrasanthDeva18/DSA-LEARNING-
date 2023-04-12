#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first = NULL;
void create(int a[],int n){
    int i;
    struct Node *last,*t;
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
     while(p!=NULL){
        if(p->data==key){
            return p;
        }
        p=p->next;
     }
     return NULL;
}
struct Node *lSearch(struct Node *p,int key){
    if(p==0){
        return NULL;
    }
    else if(p->data==key){
        return p;
    }
    return search(p->next,key);
}
int main(){
    int a[]={1,2,3,4,5};
    create(a,5);
    printf("%d",search(first,1));
    return 0;

}