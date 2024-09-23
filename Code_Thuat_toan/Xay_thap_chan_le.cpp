#include<bits/stdc++.h>
#define QHaiz main
#define int long long
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

QHaiz() {
    hacktime;
    int n; cin>>n;
    int a[n+5];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    int res = a[0];
    int index = 0;
    for(int i=0;i<n-1;i++){ 
        if((a[i]+a[i+1])%2==1){
            res +=a[i+1];
            index = i;
        }
    }
    cout<<res;
    return 0; 
}
