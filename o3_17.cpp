#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a, otv, kk;
    string b, c;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> kk;
        otv = kk;
        cin >> b;
        for (int q = 0; q < kk; q++)
        {
            c = b[q];
            if (c != "B")
            {
                otv--;
            }
            else
            {
                break;
            }
        }
        for (int q = 0; q < kk; q++)
        {
            c = b[b.size() - q - 1];
            if (c != "B")
            {
                otv--;
            }
            else
            {
                break;
            }
        }
        cout << otv << " ";
    }
}