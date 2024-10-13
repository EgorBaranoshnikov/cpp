#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> power(n);
    for (int i = 0; i < n; ++i) {
        cin >> power[i];
    }

    int count = 0;

    for (int i = 2; i < n - 2; ++i) {
        int leftSum = power[i - 1] + power[i - 2];
        int rightSum = power[i + 1] + power[i + 2];
        
        if (power[i] > leftSum && power[i] > rightSum) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
