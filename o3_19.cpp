#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a;
    float max = -1, pr, otv;
    cin >> a;
    vector<float> s1(a);
    vector<float> s2(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s1[i];
    }
    for (int i = 0; i < a; i++)
    {
        cin >> s2[i];
    }
    for (int i = 0; i < a; i++)
    {
        pr = s1[i] * (s2[i] / 100);
        if (max < pr)
        {
            max = pr;
            otv = i;
        }
    }
    cout << otv + 1;
}