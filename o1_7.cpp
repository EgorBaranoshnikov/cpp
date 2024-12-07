#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<vector<int>> s(a, vector<int>(b));
    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < b; q++)
        {
            cin >> s[i][q];
        }
    }
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    swap(s[x1][y1], s[x2][y2]);
    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < b; q++)
        {
            cout << s[i][q] << ' ';
        }
        cout << endl;
    }
}