#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int otv = 0, pr = 1, i = 1;
    string a;
    char c;
    cin >> a;
    cin >> c;
    for (auto e : a)
    {
        if (a[i - 1] == c)
        {
            otv = otv + i - pr;
            pr++;
        }
        i++;
    }
    cout << otv;
}