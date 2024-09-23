#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

QHaiz(){
    hacktime;
  	int n;
    cin >> n;
    if (n % 5 == 0) {
        cout << "0";
        return 0;
    }
    queue<int> q;
    q.push(6);
    q.push(8);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        if (u % n == 0) {
            cout << u;
            return 0;
        }
        q.push(u * 10 + 6);
        q.push(u * 10 + 8);
        
    }
}