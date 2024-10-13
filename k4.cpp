#include <iostream>

using namespace std;

int main()
{
    long long a, b, tek, t1, t2;
    long ps[100000], otv[100000];
    ps[0] = 0;
    cin >> a >> b;
    for (int i = 1; i <= a; i++)
    {
        cin >> tek;
        ps[i] = ps[i - 1] + tek;
    }
    for (int i = 0; i < b; i++)
    {
        cin >> t1 >> t2;
        otv[i] = ps[t2] - ps[t1 - 1];
    }
    for (int i = 0; i < b; i++)
    {
        cout << otv[i] << endl;
    }
}