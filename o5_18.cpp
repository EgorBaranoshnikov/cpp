#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "4" << " " << a - 4;
    }
    else
    {
        cout << 9 << " " << a - 9;
    }
}