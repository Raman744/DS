#include <bits/stdc++.h>
using namespace std;
int main()
{
    int amount;
    double balance;
    double rem_bal;
    cin >> amount;
    cin >> balance;
    if (amount % 5 == 0.0)
    {
        if (amount < balance + 0.5)
        {
            rem_bal = balance - amount - (0.5);
            cout << rem_bal << endl;
        }
    }
    else
    {
        cout << balance << endl;
    }
}