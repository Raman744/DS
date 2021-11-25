#include <stdio.h>
int main()
{
    int A[11] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17};
    int i;

    int l = 6;
    int h = 17;
    int diff = l - 0;
    for (i = 6; i <= h; i++)
    {
        if (A[i] - i != diff)
            printf("Missing elements is = %d \n ", i + diff);
        break;
    }
}