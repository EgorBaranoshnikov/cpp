#include <iostream>
 
const int N=1E5;
int a[N], p[N], s[N];
 
int main() {
    int n, k, i, j; std::cin >> n >> k;
    for (i=0, j=0; i<n; i++) {
        std::cin >> a[i];
        if (a[i] > a[j]) {p[i] = i; j = i;} else p[i] = p[j];
    }
    for (i=n-1, j=n-1; i>=0; i--) {
        if (a[i] >= a[j]) {s[i] = i; j = i;} else s[i] = s[j];
    }
    int m = 0, l = 0, r = k+1;
    for (i=l, j=r; j<n; i++, j++) {
        int t = a[p[i]] + a[s[j]];
        if (t > m) {l = p[i]; r = s[j]; m = t;}
    }
    std::cout << (l+1) << " " << (r+1);
}