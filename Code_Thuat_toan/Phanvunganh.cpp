#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;
int A[205][205];
int m, n; 

int DFS(int u, int v) {
    stack<pair<int, int>> S;
    int dem = 1;
    A[u][v] = 1;
    S.push({u, v});
    while(S.size()) {
        int x = S.top().first, y = S.top().second; 
        S.pop();
        for(int i = -1; i <= 1; i++)
        for(int j = -1; j <= 1; j++)
        if(A[x + i][y + j] == 0) {
            A[x + i][y + j] = 1;
            S.push({x + i, y + j});
            dem++;
        }
    }
    return dem;
}

QHaiz() {
    hacktime;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
    cin >> A[i][j];

    for(int i = 0; i <= n + 1; i++) {
        A[i][0] = A[i][m + 1] = 1;
    }
    for(int j = 0; j <= m + 1; j++) {
        A[0][j] = A[n + 1][j] = 1;
    }
    int k = 0, G[n * m + 5]={};
    for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
    if(A[i][j] == 0) {
        k++;
        G[k] = DFS(i, j);
    }
    sort(G + 1, G + k + 1);
    cout << k << endl;
    for(int i = 1; i <= k; i++) cout << G[i] << " ";
}