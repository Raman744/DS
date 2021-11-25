#include <bits/stdc++.h>
using namespace std;
void prinVec(vector<int> v)
{
    cout << "size: " << v.size() << endl; // v.size = 0(1)
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // vecor<int> v(10,3,4)
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    prinVec(v);
    v.pop_back();

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;

    //     cout << endl;
    //     v.push_back(x);
    // }
    prinVec(v); // O{1}
    vector<int> v2 = v;
}