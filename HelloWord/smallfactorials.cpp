#include <bits/stdc++.h>

using namespace std;
int main()
{
    int T;
    cin >> T;
    int arr[T];
    for (int i = 0; i < T; i++)

    {
        int N;
        int fact = 1;
        cin >> N;

        while (N > 0)
        {
            fact *= N;
            N--;
        }
        cout << fact << endl;
    }
}
