#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    cout << "size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }
    cout << endl;
}
int main()
{
    // vector<pair<int, int>> v;
    // //v = {{1, 2}, {2, 3}, {3, 4}};
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     // v.push_back({x, y});
    //     v.push_back(make_pair(x, y));
    // }

    // printVec(v);

    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; i++)
        {
            int x;
            cin >> x;
            //   v[i].push_back(x);
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);
    v.push_back(vector<int>());
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
}