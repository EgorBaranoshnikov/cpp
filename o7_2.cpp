#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long a, tek, pr = 0, otv = 0;
    cin >> a;
    vector<long> ma(a);
    for (int i = 0; i < a; i++)
    {
        cin >> ma[i];
    }
    for (int i = 0; i < a; i++)
    {
        int j = a - i - 1; 
        for (j; j != 0; j--)
        {
            if (ma[i] == ma[a - pr - 1])
            {
                otv++;
            }
            pr++;
        }
        pr = 0;
        cout << otv << endl;
        otv = 0;
    }
}