#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long n_from_k(string n, int k)
{
    int power = 1;
    long long ans = 0;
    for (int i = n.size() - 1; i >= 0; --i)
    {
        if ('0' <= n[i] && n[i] <= '9')
        {
            ans += (n[i] - '0') * power;
        }
        else
        {
            ans += (n[i] - 'A' + 10) * power;
        }
        power *= k;
    }
    return ans;
}

string n_to_k(long long n, int k)
{
    string ans;
    while (n > 0)
    {
        ans.push_back('0' + n % k);
        n /= k;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string n;
    int k;
    cin >> n >> k;
    cout << n_from_k(n, k);
}