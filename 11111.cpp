#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long a1 = abs(A - (B + C));
    long long a2 = abs(B - (A + C));
    long long a3 = abs(C - (A + B));

    long long a4 = abs(A - (C + B));
    long long a5 = abs(C - (A + B));
    long long a6 = abs(B - (A + C));

    long long a7 = abs(B - (C + A));
    long long a8 = abs(C - (B + A));
    long long a9 = abs(A - (B + C));

    long long min_diff = min({max(0LL, a1 - D),
                              max(0LL, a2 - D),
                              max(0LL, a3 - D),
                              max(0LL, a4 - D),
                              max(0LL, a5 - D),
                              max(0LL, a6 - D),
                              max(0LL, a7 - D),
                              max(0LL, a8 - D),
                              max(0LL, a9 - D)});

    cout << min_diff;
}