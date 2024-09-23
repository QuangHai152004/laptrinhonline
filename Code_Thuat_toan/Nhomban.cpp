#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

QHaiz(){
    hacktime;
    int n,m,x,y,k=0,max=0,dem;
    cin>>n>>m;
    vector<int> A[n+5];
    int d[n+5]={};

    while(m--){
        cin>>x>>y;
        A[x].push_back(y);
        A[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(d[i]==0){
            k++;
            dem=1;
            d[i]=1;
            stack<int> S;
            S.push(i);
            while(S.size()){
                int u = S.top(); S.pop();
                for(int v:A[u]){
                    if(d[v]==0){
                        d[v]=k;
                        dem++;
                        S.push(v);
                    }
                }
            }
        }
	    if(max<dem) max=dem;
    }
cout<<k<<endl<<max;
}