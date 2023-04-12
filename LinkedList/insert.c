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

//find the count or identify the length of the linked list
int count(struct Node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
void display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
void insert(struct Node *p,int pos,int x){
    struct Node *t;
    if(pos < 0 || pos > count(p)){
        // printf("breaked");
        return ;
    }
    // printf("hii");
    t=(struct Node *)malloc(sizeof(struct Node));   
    t->data=x;
    if(pos==0){
        t->next=first;
        first=t;
    }
    else if(pos>0){
        for(int i=0;i<pos-1;i++){
            p=p->next;   
        }
            //  printf("problem");
            t->next=p->next;
            p->next=t;
    }

}


int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("\n%d",&a[i]);
  }
  create(a,n);
  int pos;
  scanf("\n%d",&pos);
  int x;
    scanf("\n%d",&x);
    insert(first,pos,x);
    display(first);
    return 0;
}