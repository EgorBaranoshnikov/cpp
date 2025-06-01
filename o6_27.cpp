#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    string s;

    while (cin >> s)
    {
        if (s == "push")
        {
            int n;
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }
        else if (s == "pop")
        {
            if (q.empty())
            {
                cout << "error" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (s == "front")
        {
            if (q.empty())
            {
                cout << "error" << endl;
            }
            else
            {
                cout << q.front() << endl;
            }
        }
        else if (s == "size")
        {
            cout << q.size() << endl;
        }
        else if (s == "clear")
        {
            while (!q.empty())
            {
                q.pop();
            }
            cout << "ok" << endl;
        }
        else if (s == "exit")
        {
            cout << "bye" << endl;
            break;
        }
    }
}