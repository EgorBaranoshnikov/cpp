#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int qq, a;
    cin >> qq;
    vector<int> power(qq);
    for (int i = 0; i < qq; i++)
    {
       cin >> a;
       power[i] = a;
    }
    for (int i = 1; i <= qq; i++)
    {
        cout << power[qq - i] << " ";
    }
}