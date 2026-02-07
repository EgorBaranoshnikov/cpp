#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    vector<int> s;
    while (cin >> a) {
        s.push_back(a);
    }
    
    if (!s.empty()) {
        for (int i = s.size() - 1; i > 0; i--) {
            cout << s[i] << " ";
        }
        cout << s[0];
    }
}