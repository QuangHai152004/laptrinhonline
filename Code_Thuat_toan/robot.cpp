#include <bits/stdc++.h>
#define QHaiz main
#define int long long
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

set<pair<int,int>> res;
void DFS(int x,int y){
	res.insert({x,y});
	if (x%2==0 && res.find({y,x/2})==res.end()) DFS(y,x/2);
	if (y%2!=0 && res.find({(y+1)/2,x})==res.end()) DFS((y+1)/2,x);
}
QHaiz(){
	int x,y;
	cin>>x>>y;
	DFS(x,y);
	cout<<res.size();
}


