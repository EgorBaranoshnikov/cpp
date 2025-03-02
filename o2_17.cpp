#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    long long a, b, prov = 0, pr = 0;
    string c;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        cin >> c;
        for (int i = 0; i < b; i++)
        {
            if (prov == 2)
            {
                break;
            }
            if (c[i] == "@"[0])
            {
                pr++;
            }
            if (c[i] == "*"[0])
            {
                prov++;
            }
            if (c[i] == "@"[0] || c[i] == "."[0])
            {
                prov = 0;
            }
        }
        cout << pr << endl;
        prov = 0;
        pr = 0;
    }
}