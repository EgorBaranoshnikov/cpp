#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> q(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    q.insert(q.begin() + k, x);
    
    // Выводим результат
    for (int i = 0; i < q.size(); i++) {
        cout << q[i] << " ";
    }
    cout << endl;
    
    return 0;
}