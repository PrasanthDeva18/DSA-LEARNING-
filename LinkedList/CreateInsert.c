#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first = NULL;
int count(struct Node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
void insert(struct Node *p,int pos,int x){
    struct Node *t;
    if(pos < 0 || pos < count(p) ){
        return ;
    }
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    if(pos==0){
        t->next=first;
        first=t;
    }
    else if(pos >0){
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }

}
void display(struct Node *p){
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(){
    insert(first,0,1);
    insert(first,0,3);
    insert(first,1,2);
 

    display(first);
    return 0;
}