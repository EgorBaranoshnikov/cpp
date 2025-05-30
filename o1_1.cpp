#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int qq, a, b, c;
    cin >> qq;
    vector<string> power(qq);
    for (int i = 0; i < qq; i++)
    {
        cin >> a >> b >> c;
        if (b > a && b < c)
        {
            power[i] = "STAIR";
        }
        else
        {
            if (b > a && b > c)
            {
                power[i] = "PEAK";
            }
            else
            {
                power[i] = "NONE";
            }
        }
    }
    for (int i = 0; i < qq; i++)
    {
        cout << power[i] << endl;
    }
}