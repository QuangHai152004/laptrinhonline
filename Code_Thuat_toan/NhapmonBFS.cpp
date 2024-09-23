#include <bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

bool Valid(int x, int y, int m, int n) {
    return (x >= 0 && y >= 0 && x < m && y < n);
}

int MinD(int startX, int startY, int endX, int endY, int m, int n) {
    vector<vector<int>> M(m, vector<int>(n, -1));
    vector<int> dx = {-2, -1, 1, 2, 2, 1, -1, -2};
    vector<int> dy = {1, 2, 2, 1, -1, -2, -2, -1};
    
    queue<pair<int,int>> Q;
    Q.push({startX, startY});
    M[startX][startY] = 0;

    while (!Q.empty()) {
        pair<int, int> u = Q.front();
        Q.pop();
        for (int i = 0; i < 8; i++) {
            int nextX = u.first + dx[i];
            int nextY = u.second + dy[i];
            
            if (Valid(nextX, nextY, m, n) && M[nextX][nextY] == -1) {
                M[nextX][nextY] = M[u.first][u.second] + 1;
                Q.push({nextX, nextY});
                if (nextX == endX && nextY == endY) {
                    return M[nextX][nextY];
                }
            }
        }
    }
    return -1;
}

QHaiz() {
    hacktime;
    int m, n, x1, y1, x2, y2;
    cin >> m >> n >> x1 >> y1 >> x2 >> y2;
    
    cout << MinD(x1, y1, x2, y2, m, n);
    
    return 0;
}