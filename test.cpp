#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSubset(const vector<int>& subset, const vector<int>& superset) {
    // Проверяем, что все элементы subset есть в superset
    for (int role : subset) {
        bool found = false;
        for (int super_role : superset) {
            if (role == super_role) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> costs(n);
    vector<vector<int>> roles(n);
    
    // Чтение данных
    for (int i = 0; i < n; i++) {
        cin >> costs[i];
        int l;
        cin >> l;
        roles[i].resize(l);
        for (int j = 0; j < l; j++) {
            cin >> roles[i][j];
        }
    }
    
    // Проверяем все пары игроков
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            
            // Условие 1: cost_i >= cost_j
            if (costs[i] < costs[j]) continue;
            
            // Условие 2: игрок j знает все роли игрока i
            if (!isSubset(roles[i], roles[j])) continue;
            
            // Условие 3: cost_i > cost_j ИЛИ j знает больше ролей чем i
            if (costs[i] > costs[j]) {
                cout << "Yes" << endl;
                return 0;
            } else if (costs[i] == costs[j] && roles[j].size() > roles[i].size()) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    
    cout << "No" << endl;
    return 0;
}