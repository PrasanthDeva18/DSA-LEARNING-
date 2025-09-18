#include <stdio.h>
#include <stdlib.h>

struct rectangle {
    int length;
    int breadth;
};

int main() {
    
    struct rectangle *p; 
    // In c++ compiler struct keyword is no needed
    
    p = (struct rectangle*)malloc(sizeof(struct rectangle));
    
    p->length = 2;
    
    printf("%d\n", *p);
    
    free(p);
    
    p=NULL;
    printf("%d", p);
    return 0;
}