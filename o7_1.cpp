#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a, sum = 0, tek = 1;
    cin >> a;
    while (sum < a)
    {
        sum = sum + tek;
        tek++;
    }
    cout << tek - 1;
}