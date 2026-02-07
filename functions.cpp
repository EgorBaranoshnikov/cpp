#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool fff(const vector<int> &cen1, const vector<int> &cen2) //определяет являетсяли вектор cen1 подмножеством вектора cen2
{
    for (int i = 0; i < size(cen1); i++)
    {
        bool tf = false;
        for (int j = 0; j < size(cen2); j++)
        {
            if (cen1[i] == cen2[j])
            {
                tf = true;
                break;
            }
        }
        if (tf == false)
        {
            return false;
        }
    }
    return true;
}

vector<long long> gener(long long n)
{
    vector<long long> primes(n + 1, 1);
    vector<long long> primes_v2(0);
    primes[0] = primes[1] = 0;
    for (long long i = 2; i * i < n; i++)
    {
        if (primes[i])
        {
            primes_v2.push_back(i);
            for (long long j = i * i; j < n; j += i)
            {
                  primes[j] = 0;
            }
        }
    }
    return primes_v2;
}