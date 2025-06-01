#include <iostream>
#include <queue>
#include <vector>
#include <climits>

using namespace std;

struct Cell {
    int x, y, dist;
};

int aaa(int N, int x1, int y1, int x2, int y2) {
    int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
    int dy[] = {1, -1, 1, -1, 2, -2, 2, -2}; 
    vector<vector<bool>> s(N + 1, vector<bool>(N + 1, false));
    
    queue<Cell> q;
    q.push({x1, y1, 0});
    s[x1][y1] = true;
    
    while (!q.empty()) {
        Cell t = q.front();
        q.pop();
        
        if (t.x == x2 && t.y == y2) {
            return t.dist;
        }
        
        for (int i = 0; i < 8; ++i) {
            int xx = t.x + dx[i];
            int yy = t.y + dy[i];
            
            if (xx >= 1 && xx <= N && yy >= 1 && yy <= N && !s[xx][yy]) {
                s[xx][yy] = true;
                q.push({xx, yy, t.dist + 1});
            }
        }
    }
    
    return -1;
}

int main() {
    int N, x1, y1, x2, y2;
    cin >> N >> x1 >> y1 >> x2 >> y2;
    cout << aaa(N, x1, y1, x2, y2) << endl;
}