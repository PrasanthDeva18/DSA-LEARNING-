#include <stdio.h>

int main() {

    int a[5] = {1,2,3,4,5};
    
    printf("%d", a[0]);
    
    int n;
    
    printf("enter the size of the array: \t");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}
