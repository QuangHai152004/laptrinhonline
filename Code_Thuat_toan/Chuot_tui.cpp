#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

QHaiz() {
    hacktime;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    queue<int> Q;
    int count = 0;
    for (int i = 0; i < n; i++) {
        Q.push(a[i]);
        if (Q.front() >= a[i] * 2) {
            Q.pop();
        } else {
            count++;
        }
    }
    cout << count;
}
