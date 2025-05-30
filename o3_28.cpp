#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int n, otv = 0, pr;
    cin >> n;
    for (int i = 0; i < n * n; ++i)
    {
        cin >> pr;
        if (pr == 1)
        {
            otv++;
        }
    }
    cout << otv / 2;
}