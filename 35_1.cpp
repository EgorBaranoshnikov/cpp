#include <iostream>
using namespace std;
main()
{
    int m, n, o;
    cin >> o;
    for (int i = 1; i <= o; i++)
    {
        cin >> n >> m;
        cout << 19 * m + (n + 239) * (n + 366) / 2 << endl;
    }
}