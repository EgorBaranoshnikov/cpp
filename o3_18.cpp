#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    long long a;
    cin >> a;
    for (long long i = 2; i * i <= a; i++)
    {
        while (a % i == 0)
        {
            if (a != i)
            {
            cout << i << " ";
            a /= i;
            }
        }
    }
    if (a != 1)
    {
        cout << a;
    }
}