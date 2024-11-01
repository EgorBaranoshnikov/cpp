#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long a, tek = 1, tek2 = 1;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < tek2; i++)
        {
            cout << tek << " ";
            tek++;
        }
        cout << endl;
        tek = 1;
        tek2++;
    }
}