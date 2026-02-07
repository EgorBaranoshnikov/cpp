#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n - 1; i > 0; i--) {
        int max_idx = 0;
        for (int j = 1; j <= i; j++) {
            if (a[j] > a[max_idx]) {
                max_idx = j;
            }
        }
        swap(a[max_idx], a[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}