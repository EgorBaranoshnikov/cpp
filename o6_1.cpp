#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a, kol1 = 0, kol2 = 0, b;
    cin >> a;
    vector<int> s(a);
    vector<int> d(a);
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b % 2 == 0)
        {
            s[kol1] = b;
            kol1++;
        }
        else
        {
            d[kol2] = b;
            kol2++;
        }
    }
    for (int i = 0; i < kol2; i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < kol1; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    if (kol1 >= kol2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}