#include <iostream>

using namespace std;

int main()
{
    long long a, b, max = 0, id = 1;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (max < b)
        {
            max = b;
            id = i + 1;
        }
    }
    cout << id;
}