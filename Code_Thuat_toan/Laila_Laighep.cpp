#include <bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

string A, B;
int n;

bool isValid(const string& s) {
    int len = s.size();
    if (len >= 3) {
        char a = s[len-3], b = s[len-2], c = s[len-1];
        if ((a == 'T' || a == 'H' || a == 'L' || a == 'N') &&
            (b == 'T' || b == 'H' || b == 'L' || b == 'N') &&
            (c == 'T' || c == 'H' || c == 'L' || c == 'N')) {
            return false;
        }
    }
    return true;
}

void TRY(string x) {
    if (x.size() == n) {
        cout << x << endl;
        return;
    }

    x.push_back(A[x.size()]);
    if (isValid(x)) {
        TRY(x);
    }
    x.pop_back(); 

    if (A[x.size()] != B[x.size()]) {
        x.push_back(B[x.size()]);
        if (isValid(x)) {
            TRY(x);
        }
        x.pop_back(); 
    }
}

QHaiz() {
    hacktime;
    cin >> A >> B;
    n = A.size();
    for (int i = 0; i < n; i++) {
        if (A[i] > B[i]) {
            swap(A[i], B[i]);
        }
    }
    TRY("");
    return 0;
}
