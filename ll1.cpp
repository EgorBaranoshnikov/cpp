#include <vector>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    long double maxz = 0, tekz = 0;
    cin >> n;
    vector<vector<int>> znh(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        cin >> znh[i][0] >> znh[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            tekz = sqrt(((znh[j][0] - znh[i][0]) * (znh[j][0] - znh[i][0])) + ((znh[j][1] - znh[i][1]) * (znh[j][1] - znh[i][1])));
            if (tekz > maxz)
            {
                maxz = tekz;
            }
        }
    }
    cout << fixed << setprecision(10) << maxz;
}