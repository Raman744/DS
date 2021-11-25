#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> s;
    s.push("abc");
    s.push("bcd");
    s.push("cde");
    s.push("def");
    s.push("efg");
    while (!s.empty())
    {
        cout << s.front() << endl;
        s.pop();
    }
}