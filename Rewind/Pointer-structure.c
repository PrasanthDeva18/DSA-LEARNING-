#include <stdio.h>

struct rectangle {
    int length;
    int breadth;
};

int main() {

    struct rectangle r = {1,2};
    struct rectangle *p = &r;
    
    r.length = 11;
    (*p).length = 21;
     printf("%d\t", r);
    p->length=33;
    
    printf("%d", r);

    return 0;
}