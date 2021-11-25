#include <stdio.h>
#include <conio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
    return -1;
}
void Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = x;
    }
}
int Max(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}
int Min(struct Array arr)
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}
int Sum(struct Array arr)
{
    int s = 0;
    int i;
    for (i = 0; i < arr.length; i++)
    {
        s += arr.A[i];
    }
    return s;
}
float Avg(struct Array arr)
{
    return (float)Sum(arr) / arr.length;
}

int main()
{
    struct Array arr = {{17, 2, 71, 6, 1, 18, 19, 23, 16, 9}, 10, 10};
    Display(arr);
    printf("\n");
    printf("%d ", Get(arr, 3));
    printf("\n");
    Set(&arr, 4, 10);
    printf("\n");
    Display(arr);
    printf("\n");
    printf("%d ", Max(arr));
    printf("\n");
    printf("%d ", Min(arr));
    printf("\n");
    printf("%d ", Sum(arr));
    printf("\n");
    printf("%d ", Avg(arr));
}
