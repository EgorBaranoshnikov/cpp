#include <vector>
#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = n;
    vector<vector<int>> zap(n, vector<int>(5));
    for (int z = 0; z < n; z++)
    {
        cin >> zap[z][0] >> zap[z][1] >> zap[z][2] >> zap[z][3] >> zap[z][4];
    }
    for (int z = 0; z < n; z++)
    {
        if (zap[z][0] > zap[z][2])
        {
            swap(zap[z][0], zap[z][2]);
        }
        zap[z][0] -= zap[z][4];
        zap[z][2] += zap[z][4];
        if (zap[z][1] > zap[z][3])
        {
            swap(zap[z][1], zap[z][3]);
        } // паранойя
        zap[z][1] -= zap[z][4]; 
        zap[z][3] += zap[z][4];
        zap[z][4] = 0; 
    }
    int kl = 0;
    for (int z = 0; z < n - 1; z++)
        for (int x = z + 1; x < n; x++)
            if ((zap[z][2] - zap[z][0] + zap[x][2] - zap[x][0] >=
                 max(zap[z][2], zap[x][2]) - min(zap[z][0], zap[x][0])) &&
                (zap[z][3] - zap[z][1] + zap[x][3] - zap[x][1] >=
                 max(zap[z][3], zap[x][3]) - min(zap[z][1], zap[x][1])))
            {
                if (zap[z][4] == 0 && zap[x][4] == 0)
                {
                    sum--; // мы нашли новый кластер
                    kl++;
                    zap[z][4] = kl;
                    zap[x][4] = kl;
                    continue;
                }
                if (zap[z][4] == 0 || zap[x][4] == 0)
                {
                    sum--; // мы нашли новое пересечение
                    zap[z][4] = max(zap[z][4], zap[x][4]);
                    zap[x][4] = max(zap[z][4], zap[x][4]);
                    continue;
                }
                if (zap[z][4] != zap[x][4])
                {
                    sum--; // мы нашли пересечение кластеров и сейчас будем их объединять
                    int a = zap[z][4], b = zap[x][4];
                    int c = max(a, b);
                    for (int v = 0; v < n; v++)
                        if (zap[v][4] == a || zap[v][4] == b)
                            zap[v][4] = c;
                    continue;
                }
            }
    cout << sum;
}