#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &val : m)
    {
        cout << val.first << " " << val.second << endl;
    }
}
int main()
{
    // map<string, string> m;
    map<int, string> m;
    m[1] = "abc"; // O(log(n))
    m[5] = "cdc";
    m[3] = "acd";

    //m["abcd"] = "abcd"; // s.size()*log(n)

    m.insert({4, "afg"});
    auto it = m.find(7);
    if (it != m.end()) // O(log(n))
        m.erase(it);   //O(log(n))
    // if (it == m.end())
    // {
    //     cout << "No Value";
    // }
    // else
    // {
    //     cout << (*it).first << " " << (*it).second;
    // }

    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    print(m);
}