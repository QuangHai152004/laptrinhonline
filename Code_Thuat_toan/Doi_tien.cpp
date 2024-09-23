#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    queue<int> Q;
    map<int,int> M ={{0,0}};
    int n,m;
    int a[n];
    cin>>n>>m;
    for(auto x:a) cin>>x;
    Q.push(0);
    while(Q.size() && M.find(0)==M.end()){
        int u = Q.front();
        Q.pop();
        for(auto x:a){
            if(x+u<m && M.find(x+u)==M.end()){
                Q.push(x+u);
                M[x+u]=M[u]+1;
            }
        }
    }
    if(M.find(m)==M.end()) cout<<"0";
    else cout<<M[m];
}