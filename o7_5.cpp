#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    long a, max, min, tek, otv = 0;
    cin >> a;
    cin >> tek;
    max = tek;
    min = tek;
    for (int i = 0; i < a - 1; i++)
    {
        cin >> tek;
        if (min > tek)
        {
            min = tek;
            otv++;
        }
        if (max < tek)
        {
            max = tek;
            otv++;
        }
    }
    cout << otv;
}