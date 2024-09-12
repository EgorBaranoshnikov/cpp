#include <iostream>

using namespace std;
#define ll long long

ll get(ll n, ll m, ll k) {
    ll res = 0;
    for (int i = k; i <= n; i += m) {
        res++;
    }
    return res;
}

int main() {
    ll n, k;
    cin >> n >> k;
    if (k & 1) {
        cout << (n / k) * (n / k) * (n / k) << endl;
    } else {
        ll add = get(n, k, k / 2);
        cout << (n / k) * (n / k) * (n / k) + add * add * add << endl;
    }
    return 0;
}