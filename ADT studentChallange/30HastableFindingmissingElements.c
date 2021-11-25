#include <stdio.h>
int main()
{
    int A[10] = {3, 7, 4, 9, 12, 5, 1, 11, 2, 10};
    int i;
    int n = 10;
    int l = 1;
    int h = 12;
    int H[12] = {0};
    for (int i = 0; i <= n; i++)
    {
        H[A[i]]++;
    }
    for (i = l; i <= h; i++)
    {
        if (H[i] == 0)
            printf("Missing Elements is : %d \n", i);
    }
}
