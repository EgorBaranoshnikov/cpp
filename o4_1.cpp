#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    int b, c, max = 0;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> c;
        if (c > max)
        {
            max = c;
        }
    }
    cout << max;
}