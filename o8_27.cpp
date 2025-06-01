#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    vector<int> v;
    for (char e : s)
    {
        if (isdigit(e))
        {
            v.push_back(e - '0');
        }
        else if (e != ' ')
        {
            int x = v.back();
            v.pop_back();
            int y = v.back();
            v.pop_back();
            if (e == '+')
            {
                v.push_back(x + y);
            }
            else if (e == '-')
            {
                v.push_back(y - x);
            }
            else
            {
                v.push_back(x * y);
            }
        }
    }
    cout << v.back();
}