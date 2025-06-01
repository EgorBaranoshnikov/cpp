#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool rr(const vector<int> &ss, int k, int mid)
{
    int pl = 1;
    int la = ss[0];

    for (size_t i = 1; i < ss.size(); ++i)
    {
        if (ss[i] - la >= mid)
        {
            pl++;
            la = ss[i];
            if (pl == k)
            {
                return true;
            }
        }
    }
    return false;
}

int r(const vector<int> &st, int k)
{
    int left = 0;
    int right = st.back() - st.front();
    int ress = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (rr(st, k, mid))
        {
            ress = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ress;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }

    cout << r(s, k);
}