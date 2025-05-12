#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    vector<int> first_list(N);
    for (int i = 0; i < N; ++i) {
        cin >> first_list[i];
    }
    
    vector<int> second_list(M);
    for (int i = 0; i < M; ++i) {
        cin >> second_list[i];
    }
    
    for (int num : second_list) {
        auto lower = lower_bound(first_list.begin(), first_list.end(), num);
        if (lower == first_list.end() || *lower != num) {
            cout << "0\n";
        } else {
            auto upper = upper_bound(first_list.begin(), first_list.end(), num);
            int first_pos = distance(first_list.begin(), lower) + 1;
            int last_pos = distance(first_list.begin(), upper - 1) + 1;
            cout << first_pos << " " << last_pos << "\n";
        }
    }
    
    return 0;
}