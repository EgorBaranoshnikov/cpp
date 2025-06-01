#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string s;
    string d;
    stack<char> k;
    cin >> s;
    for (char e : s)
    {
        if (k.empty() == false && k.top() == e)
        {
            k.pop();
        }
        else
        {
            k.push(e);
        }
    }
    while (k.empty() == false)
    {
        d = k.top() + d;
        k.pop();
    }
    cout << d;
}