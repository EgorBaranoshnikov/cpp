#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a, pr = 0;
    string b;
    cin >> b;
    a = stoi(b);
    for (int i = 0; i <= b.size() - 1; i++)
    {
        if (b[i] != "4"[0] && b[i] != "7"[0])
        {
            pr++;
            break;
        }
    }
    if (pr == 0)
    {
        cout << "YES";
    }
    else
    {
        if (a % 4 == 0 || a % 7 == 0 || a % 47 == 0 || a % 44 == 0 || a % 74 == 0 || a % 77 == 0 || a % 444 == 0 || a % 447 == 0 || a % 474 == 0 || a % 477 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}