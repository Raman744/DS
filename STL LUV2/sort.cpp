#include <bits/stdc++.h>
using namespace std;
void prin(vector<int> v)
{
    cout << " Size " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }
}
void Sort(vector<int> v)
{
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}
void Sum(vector<int> v)
{

    cout << " sum : " << accumulate(v.begin(), v.end(), 0) << endl;
}
void Reverse(vector<int> v)
{
    reverse(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}
void Sum2(vector<int> v)
{
    int sum2;
    // partial_sum(v.begin(), v.end(), sum2);

    cout << sum2 << " ";
}
int main()
{
    vector<int> v;
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); //o(1)
    }

    prin(v);
    Sort(v);
    Sum(v);
    Reverse(v);
    Sum2(v);
}