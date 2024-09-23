#include <bits/stdc++.h>
#define QHaiz main
#define int long long
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

QHaiz() {
    hacktime;
    int n, k, res = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        if (a[i] > i * k) {
            res += a[i] - i * k;
        } else {
            break; 
        }
    }
    cout << res << endl;
    return 0;
}
