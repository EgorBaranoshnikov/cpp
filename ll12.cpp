#include <iostream>
#include <vector>

using namespace std;

vector<long long> gener(long long n)
{
    vector<long long> primes(n + 1, 1);
    vector<long long> primes_v2(0);
    primes[0] = primes[1] = 0;
    for (long long i = 2; i * i <= n; i++)
    {
        if (primes[i])
        {
            primes_v2.push_back(i);
            for (long long j = i * i; j <= n; j += i)
            {
                primes[j] = 0;
            }
        }
    }
    return primes_v2;
}

int main()
{
    long long n, otv = 0;
    cin >> n;
    vector<long long> primes;
    for (int i = 2; i < n; i++)
    {
        long long pr = i * i * i * i * i * i * i * i;
        if (pr <= n && pr > 0)
        {
            otv++;
        }
        else
        {
            break;
        }
    }
    long long c1, c2;
    primes = gener(n);
    for (long long i = 0; i < primes.size(); i++)
    {
        c1 = primes[i];
        if (c1 * c1 > n)
        {
            break;
        }
        for (long long j = i + 1; j < primes.size(); j++)
        {
            c2 = primes[j];
            long long pr = c1 * c1 * c2 * c2;
            if (pr <= n && pr > 0)
            {
                otv++;
            }
            else
            {
                break;
            }
        }
    }
    cout << otv;
}
// я фиг знает как ещё улучшить код, но он 1 000 000 000 за ~10 сек проверяет
// а огр 4 000 000 000 000 за 5 сек
// p⁸ (где p - простое) - имеет делители: 1, p, p², p³, p⁴, p⁵, p⁶, p⁷, p⁸
// p²q² (где p, q - различные простые) - имеет делители: 1, p, q, p², pq, q², p²q, pq², p²q²