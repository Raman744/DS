#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int tot = 0;
    for (int i = 0; i < k; i++)
    {
        long long int t;
        cin >> t;

        if (t % k == 0)
            tot++;
        else
            tot = tot;
    }
    cout << tot << endl;
}