#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int A, B;
        cin >> A >> B;
        int rem = A % B;
        cout << rem << endl;
    }
}