#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{2, 3, 4, 5, 6};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // vector<int>::iterator it;
    for (auto it = v.begin(); it != v.end(); it++)
    {

        cout << (*it) << endl;
    }
    vector<pair<int, int>> v1 = {{1, 2},
                                 {2, 3}};
    for (auto &value : v1)
    {

        cout << value.first << " " << value.second << endl;
    }
    auto a = 1;
    cout << a << endl;
}