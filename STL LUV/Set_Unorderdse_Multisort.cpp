#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
}
int main()
{
    set<string> s;
    s.insert("abc"); //loh(n)
    s.insert("bcd");
    s.insert("efg");
    auto it = s.find("abcd"); //log(n)
    if (it != s.end())
    {
        s.erase(it);
        // cout << (*it);
    }
    print(s);
}