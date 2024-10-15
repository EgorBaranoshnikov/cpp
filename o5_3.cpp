#include <iostream>

using namespace std;

int main()
{
    string a;
    int le, kol = 0, max = 0;
    cin >> a;
    le = a.length();

    for (int i = 0; i < le; i++)
    {
        if (a[i] == "0"[0])
        {
            kol += 1;
        }
        else
        {
            kol = 0;
        }
        if (max < kol)
        {
            max = kol;
        }
    }
    cout << max;
}