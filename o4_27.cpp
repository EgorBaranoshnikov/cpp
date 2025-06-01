#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> st;
    stack<int> s;

    for (int i = 0; i < n; ++i)
    {
        int ww;
        cin >> ww;
        if (ww > 0)
        {
            st.push(ww);
            if (!s.empty())
            {
                s.push(s.top() + ww);
            }
            else
            {
                s.push(ww);
            }
        }
        else if (ww == 0)
        {
            if (st.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << s.top() << endl;
                st.pop();
                s.pop();
            }
        }
    }
}