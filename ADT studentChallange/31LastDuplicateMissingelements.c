#include <stdio.h>
int main()
{
    int A[10] = {3, 6, 8, 8, 10, 12, 15, 15, 20};
    int i;
    int n = 10;
    int LastDuplicated = 0;
    for (i = 0; i <= n; i++)
    {
        if (A[i] == A[i + 1] && A[i] != LastDuplicated)
        {
            printf("%d \n", A[i]);
            LastDuplicated = A[i];
        }
    }
}