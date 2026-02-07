#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    int ff, n;
    long long l, r, p, num;
    string s, sub;
    cin >> ff;
    while (ff--)
    {
        cin >> s >> l >> r;
        unordered_map<long long, int> ppp;
        n = s.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                sub = s.substr(i, j);

                if (sub[0] == '0' && sub.size() > 1)
                {
                    continue;
                }
                num = stoll(sub);
                ppp[num]++;
            }
        }
        p = 0;
        for (auto &[num, cnt] : ppp)
        {
            if (num <= r && num >= l)
            {
                p += cnt;
            }
        }
        cout << p << endl;
    }
}