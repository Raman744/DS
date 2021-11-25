#include <stdio.h>
int main()
{
    int A[11] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
    int i, sum = 0;
    int n = 12;
    int s;
    for (i = 0; i < 11; i++)
    {
        sum = sum + A[i];
    }
    s = n * (n + 1) / 2;
    printf("Missing No is %d ", s - sum);
}