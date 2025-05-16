#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n, i = 1, a, b;
    cin >> n >> a >> b;
    vector<int> s(n + 1);
    cin >> s[1] >> s[0];
    while (i != n)
    {
        s[i + 1] = a * s[i] + b * s[i - 1];;
        i++;
    }
    cout << s[i];
}