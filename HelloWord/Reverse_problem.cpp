#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    int lastdigit = 0;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int ans = 0;
        while (N > 0)
        {
            lastdigit = N % 10;
            N = N / 10;
            ans = ans * 10 + lastdigit;
        }
        cout << ans << endl;
    }
    return 0;
}