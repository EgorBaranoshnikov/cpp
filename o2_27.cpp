#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool uwu(const string &s)
{
    stack<char> st;

    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }

            char k = st.top();
            st.pop();

            if ((c == ')' && k != '(') ||
                (c == '}' && k != '{') ||
                (c == ']' && k != '['))
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main()
{
    string s;
    cin >> s;

    if (uwu(s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}