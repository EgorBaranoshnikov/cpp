#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[15][15];

    // обработка
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i == n - 1 - j || i == n / 2 || j == n / 2)
            a[i][j] = 1;
            else a[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 0) cout << "." << " ";
            else cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}