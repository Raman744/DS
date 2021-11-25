#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &val : m)
    {
        cout << val.first << " " << val.second << endl;
    }
}
int main()
{
    //1.inbuilt implementation
    //2.time complexity
    //3.valid keys datatype

    // map<string, string> m;
    unordered_map<int, string> m;
    m[1] = "abc"; // O(1)
    m[5] = "cdc";
    m[3] = "acd";

    auto it = m.find(5); //O(1)
    if (it != m.end())
        m.erase(it); //log(1)
    print(m);
}