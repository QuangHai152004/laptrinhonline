#include <bits/stdc++.h>
#define QHaiz main
#define int long long
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
QHaiz(){
    hacktime;
	int n,x,k,m,t,res=0;
	cin>>n>>k>>m;
	queue<int> Q;
	for(int i=1;i<=n+k-1;i++)
	{
		if(i<=n) cin>>x; else x=0;
		Q.push(x);
		while(Q.size()>k) Q.pop();
		t=0;
		while(Q.size() && Q.front()+t<=m) {t+=Q.front();Q.pop();}
		if(Q.size()) {Q.front()-=m-t; t=m;}
		res+=t;
	}
	cout<<res;
}


