#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a;
    }
    else
    {
        cout << a * 2;
    }
}