#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

QHaiz(){
    hacktime;
    int n;cin>>n;
    priority_queue<int,vector<int>,greater<int>>Q;
    int x, res=0;
    for(int i=0;i<n;i++){
        cin>>x;
        Q.push(x);
    }
    while(Q.size()){
        x=Q.top();
        Q.pop();
        x+=Q.top();
        Q.pop();
        res+=x;
        Q.push(x);
    }
    cout<<res;
}