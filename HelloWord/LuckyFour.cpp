#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        int ans = 0;
        cin >> N;
        while (N != 0)
        {

            int rem = N % 10;

            if (rem == 4)

                ans++;
            N = N / 10;
        }
        cout << ans << endl;
    }
}