#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;
typedef pair <int,int> S;

QHaiz(){
    int n; cin>>n;
    int res =0, x = INT_MIN;
    S A[n];
    for(int i=0;i<n;i++){
        cin>>A[i].first>>A[i].second;
    }
    for(int i=0;i<n;i++){
        if(A[i].first > x) {
            res++;
            A[i].second = x;
        }
     }
    cout<<res;
}