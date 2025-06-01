#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int prov;
    string t;
    stack<char> s;
    while (cin >> t)
    {
        prov = 0;
        for (auto e : t)
        {
            if (e == '(' || e == '[' || e == '{')
            {
                s.push(e);
            }
            else if (!s.empty() && (e == ')' && s.top() == '(' || e == ']' && s.top() == '[' || e == '}' && s.top() == '{'))
            {
                s.pop();
            }
            else
            {
                prov = 1;
                break;
            }
        }
        if (!s.empty())
        {
            prov = 1;
            while (!s.empty())
            {
                s.pop();
            }
        }
        cout << prov;
    }
}