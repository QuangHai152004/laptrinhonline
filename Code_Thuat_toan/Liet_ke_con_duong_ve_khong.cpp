#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

QHaiz(){
    stack<int> S;
    set<int> rest;
    int n;
    S.push(n);
    rest.insert(n);
    while(S.size()){
        int u = S.top();
        S.pop();
        for(int i=1;i*i < u;i++){
            if(u%i==0){
                int m =(i-1)*(u/i +1);
                if(rest.find(m) == rest.end()){
                    S.push(m);
                    rest.insert(m);
                }
            }
        }
    }
    for(auto a:rest) cout<<a<<" ";
}