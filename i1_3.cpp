#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    vector<int> p;
    while (cin >> a && a != 0) {
        p.push_back(a);
    }
    p.push_back(0);
    for (int i = p.size() - 1; i >= 0; i--) {
        cout << p[i] << " ";
    }
}