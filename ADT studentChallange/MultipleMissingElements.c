#include <stdio.h>
int main()
{
    int A[11] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
    int i;
    int n = 11;
    int l = 6;
    int diff = l - 0;
    for (i = 0; i < n; i++)
    {

        if (A[i] - i != diff)
        {
            while (diff < A[i] - i)
            {
                printf("%d \n", i + diff);
                diff++;
            }
        }
    }
}