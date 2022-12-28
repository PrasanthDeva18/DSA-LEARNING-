#include <stdio.h>
#include <stdlib.h>
struct array
{
    int *a;
    int length;
    int size;
} arr;
// when the struct can be pointer type then use the arrow operator
int add(struct array *arr)
{
    int x;
    printf("\nEnter the Added Value: ");
    scanf("%d", &x);
    if(arr->length<arr->size)
    arr->a[arr->length++] = x;
    // arr->length++;
    printf("\nAfter the value to be added ");
    for (int i = 0; i < arr->length; i++)
        printf("%d", arr->a[i]);
}
int insert(struct array arr)
{
    int index;
    int i;
    int value;
    printf("\nEnter the needed inserted value of index: ");
    scanf("%d", &index);
    printf("\nEnter the needed inserted value: ");
    scanf("%d", &value);
    if (index >= 0 && i <= arr.length)
        for (int i = arr.length; i > index; i--)
        {
            arr.a[i] = arr.a[i - 1];
        }
    arr.a[index] = value;
    arr.length++;
    printf("\nPrint a value of an Array:");
    for (int i = 0; i < arr.length; i++)
    {
        printf(" %d ", arr.a[i]);
    }
}
int display(struct array arr)
{
    printf("\nPrint a value of an Array:");
    for (int i = 0; i < arr.length; i++)
    {
        printf(" %d ", arr.a[i]);
    }
}
int delete(struct array arr)
{
    int index;
    int x;
    printf("\nEnter the needed delete the value using index: ");
    scanf("%d", &index);
    x = arr.a[index];
    for (int i = index; i < arr.length - 1; i++)
    {
        arr.a[i] = arr.a[i + 1];
    }
    arr.length--;
    printf("\nAfter the value to be added ");
    for (int i = 0; i < arr.length; i++)
        printf("%d", arr.a[i]);
}
int main()
{
    int n;
    printf("Enter the size of an array");
    scanf("%d", &arr.size);
    arr.a = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    printf("\nEnter a lenth of an array:");
    scanf("%d", &arr.length);
    n = arr.length;
    printf("\nUser input");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr.a[i]);
    }
    display(arr);
    add(&arr);
    insert(arr);
    delete(arr);
}
