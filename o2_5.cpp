#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, otv = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    { 
        if (a % i == 0)
        {
            otv++;
        }
    }
    cout << otv;
}