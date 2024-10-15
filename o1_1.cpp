#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    int b, max = 0, tek;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> tek;
        if (tek > max)
        {
           max = tek;
        }
    }
    cout << max;
}