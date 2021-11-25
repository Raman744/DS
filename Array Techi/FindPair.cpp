#include <bits/stdc++.h>
using namespace std;

void findPair(int nums[], int n, int taeget)
{
    for (int i = 0; i < n - 1; i++)
    {
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == taeget)
                {
                    printf("pair found (%d,%d)\n", nums[i], nums[j]);
                    return;
                }
            }
        }
    }
    printf("pair not found");
}
int main()
{
    int nums[] = {8, 7, 2, 5, 3, 1};
    int target = 10;

    int n = sizeof(nums) / sizeof(nums[0]);
    findPair(nums, n, target);
    return 0;
}