#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long a, b, d, f, pr = 0;
    cin >> a;
    vector<long> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> d;
        cin >> f;
        for (int q = 0; q < f - d + 1; q++)
        {
            cout << s[d + pr - 1] << " ";
            pr++;
        }
        cout << endl;
        pr = 0;
    }
}