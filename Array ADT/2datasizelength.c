#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int *A;
    int size;
    int length;
};

void Dispaly(struct Array arr)
{
    int i;
    printf("\n Elements are \n");
    for (i = 0; arr.length; i++)
        printf("%d", arr.A[i]);
}

int main()
{
    struct Array arr;
    int n, i;
    printf("Enter the size of the array : ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter numbers of numers");
    scanf("%d", &n);

    printf("Enter all Elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr.A[i]);
    arr.length = n;

    Dispaly(arr);
    return 0;
}