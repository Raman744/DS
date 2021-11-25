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
    int i;
    for (i = 0; i < arr.length; i++)
    {
        printf(" %d ", arr.A[i]);
    }
}
void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)

        arr->A[arr->length++] = x;
}
void Insert(struct Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)

            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}
int Delete(struct Array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index <= arr->length)
    {
        x = arr->A[index];
        for (int i = index; i <= arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return x;
    }
}

int main()
{
    struct Array arr =
        {
            {1, 2, 3, 4, 5, 6},
            20,
            5};
    Display(arr);
    // Append(&arr, 7);
    // Insert(&arr, 3, 10);

    printf("\n");
    Delete(&arr, 3);
    Display(arr);

    return 0;
}
