#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long a, s, d;
    cin >> a;
    vector<long> z(a);
    for (int i = 0; i < a; i++)
    {
        cin >> z[i];
    }
    cin >> s;
    vector<long> x(s);
    for (int i = 0; i < s; i++)
    {
        cin >> x[i];
    }
    cin >> d;
    vector<long> c(d);
    for (int i = 0; i < d; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < s; j++)
        {
            for (int h = 0; h < d; h++)
            {
                 cout << z[i] << " * " << x[j] << " * " << c[h] << " = " << z[i] * x[j] * c[h] << endl;
            }
        }
    }
}