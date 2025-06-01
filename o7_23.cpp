#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Building
{
    int index;
    double a;
    int b;
};

bool compareBuildings(const Building &x, const Building &y)
{
    if (x.a > 1.0 && y.a > 1.0)
    {
        double x_val = x.b / (x.a - 1.0);
        double y_val = y.b / (y.a - 1.0);
        return x_val < y_val;
    }
    if (x.a > 1.0)
    {
        return true;
    }
    if (y.a > 1.0)
    {
        return false;
    }
    if (x.a == 1.0 && y.a == 1.0)
    {
        return x.b < y.b;
    }
    if (x.a == 1.0)
    {
        return true;
    }
    if (y.a == 1.0)
    {
        return false;
    }
    return x.a > y.a;
}

int main()
{
    int N;
    double K;
    cin >> N >> K;

    vector<Building> buildings(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> buildings[i].a >> buildings[i].b;
        buildings[i].index = i + 1;
    }

    sort(buildings.begin(), buildings.end(), compareBuildings);

    for (const auto &building : buildings)
    {
        cout << building.index << endl;
    }
}