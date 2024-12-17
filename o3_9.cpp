#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, otv = 0;
    cin >> a;
    vector<int> b(a);
    vector<int> c(a);
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < a; q++)
        {
            if (q != i)
            {
                otv = otv + c[q];
            }
        }
        otv = otv + b[i];
        cout << otv << " ";
        otv = 0;
    }
}
