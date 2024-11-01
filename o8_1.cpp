#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a, tek1 = 0, tek2 = 0, otv = 0;
    cin >> a;
    cin >> tek1;
    for (int i = 0; i < a - 1; i++)
    {
        cin >> tek2;
        if (tek2 - tek1 != 1)
        {
             otv++;
        }
        tek1 = tek2;
    }
    cout << otv;
}