#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool fff(const vector<int> &cen1, const vector<int> &cen2)
{
    for (int i = 0; i < size(cen1); i++)
    {
        bool tf = false;
        for (int j = 0; j < size(cen2); j++)
        {
            if (cen1[i] == cen2[j])
            {
                tf = true;
                break;
            }
        }
        if (tf == false)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> cen(n);
    vector<vector<int>> ost(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cen[i];
        int l;
        cin >> l;
        ost[i].resize(l);
        for (int j = 0; j < l; j++)
        {
            cin >> ost[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (fff(ost[i], ost[j]))
                {
                    if (cen[i] < cen[j])
                    {
                        continue;
                    }
                    if (cen[i] > cen[j])
                    {
                        cout << "Yes";
                        return 0;
                    }
                    else if (cen[i] == cen[j] && ost[j].size() > ost[i].size())
                    {
                        cout << "Yes";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No";
}