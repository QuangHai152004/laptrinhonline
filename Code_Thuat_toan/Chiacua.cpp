#include <bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

vector<int> a;
int T = 0, n, res = INT_MAX;
map<pair<int, int>, int> z;

void TRY(int k, int A, int B) {
    if (k == n) {
        res = min(res, abs(A - B));
        return;
    }

    pair<int, int> P = {k, A - B};
    if (z.find(P) != z.end() && z[P] <= max(A, B)) {
        return;
    }
    z[P] = max(A, B);

    TRY(k + 1, A + a[k], B);
    TRY(k + 1, A, B + a[k]);
}

QHaiz() {
    hacktime;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        T += a[i];
    }

    TRY(0, 0, 0);
    cout << res;
    return 0;
}
