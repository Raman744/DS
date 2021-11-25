#include <stdio.h>
#include <conio.h>
struct Array
{
    int A[15];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("Array is : ");
    for (i = 0; i < arr.length; i++)
    {
        printf(" %d ", arr.A[i]);
    }
}
int BinarySearch(struct Array arr, int key)
{
    int l, h, mid;
    l = 0;
    h = arr.length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int RBinarySearch(int a[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {

        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return RBinarySearch(a, l, mid - 1, key);
        else
            return RBinarySearch(a, mid + 1, h, key);
    }
    return -1;
}
int main()
{
    struct Array arr = {{4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43}, 15, 15};
    printf("key is : %d\n ", RBinarySearch(arr.A, 0, arr.length, 27));
    Display(arr);
}