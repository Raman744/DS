#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, N, sum = 0;
    cin >> T;
    while (T--)
    {
        cin >> N;
        sum = N % 10;
        while (N >= 10)
        {
            N /= 10;
        }

        cout << sum + N << endl;
    }

    return 0;
}