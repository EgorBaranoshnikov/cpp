#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

bool isPossible(const vector<int> &a, int K, int max_pages)
{
    int volumes = 1;
    int current_sum = 0;
    for (int pages : a)
    {
        if (current_sum + pages > max_pages)
        {
            volumes++;
            current_sum = pages;
            if (current_sum > max_pages)
            {
                return false;
            }
        }
        else
        {
            current_sum += pages;
        }
    }
    return volumes <= K;
}

int findMinMaxPages(const vector<int> &a, int K)
{
    int left = *max_element(a.begin(), a.end());
    int right = accumulate(a.begin(), a.end(), 0);
    int result = right;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (isPossible(a, K, mid))
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return result;
}

int main()
{
    ifstream in("INPUT.TXT");
    ofstream out("OUTPUT.TXT");

    int N;
    in >> N;

    vector<int> a(N);
    for (int i = 0; i < N; ++i)
    {
        in >> a[i];
    }

    int K;
    in >> K;

    int result = findMinMaxPages(a, K);
    out << result << endl;

    in.close();
    out.close();
    return 0;
}