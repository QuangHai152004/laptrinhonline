#include <bits/stdc++.h>
using namespace std;

main(){
	int n, m;
	cin >> n >> m;
	vector<int> A[n+5];
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		A[x].push_back(y);
		A[y].push_back(x);
	}
	
	int d[n+5] = {}, G[n+5] = {}, k = 0;
	for(int i=1; i<=n; i++){
		if(d[i] == 0){
			G[k] = 1; d[i] = 1;
			stack<int> s;
			s.push(i);
			while(s.size()){
				int u = s.top(); s.pop();
				for(int x : A[u]){
				if(d[x] == 0){
					G[k] *= 2;
					d[x] = 1;
					s.push(x);
				}	
			}
		
			}
		}
	}
	
	cout << *max_element(G, G+k+1);
}