#include <stdio.h>
#include <stdlib.h>

int main() {
    
    //Normal Pointers
    int *p;
    int a1 = 5;
    p =&a1;
    
    // Print Address, Dereferencing - Print Value, Print Address = &
    printf("%d \t %d \t %d", p , *p , &a1);
    
    //Array in pointers
    int arr[3] = {1,2,3};
    
    int *p1;
    p1 = arr;
    // p1 = &arr[0];
    
    printf("\n%d", p1[1]);
    
    //Dynamic Memory Allocation
    int a[5] = {1,2,3,4,5};
    
    int *b;
    
    b = (int*)malloc(5*sizeof(int));
    
    b[0] = 1;
    b[1] = 2;
    
    printf("\n%d", b[2]);

      //size of pointer variable
    
    int *aa; //8
    char *bb; //8 16bit compiler in pointer variable has 8 is the default size
    
    printf("%d\n %d", sizeof(aa), sizeof(bb));


    return 0;
}
