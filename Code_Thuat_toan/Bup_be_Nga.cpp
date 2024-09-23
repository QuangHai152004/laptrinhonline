#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;  
    sort(a, a + n, greater<int>()); 
    queue<int> Q;
    int res = 0;  
    for(auto x : a)
    {
        Q.push(x);
        if(Q.front() >= x + k) {
          Q.pop();
        }
        else res += x;
    }
    cout << Q.size() << " " << res;
}