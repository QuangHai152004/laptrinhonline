#include <bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    hacktime;
	int n,m, res=0,i,j=0;
	cin>>n>>m;
	int a[n],b[m];
	for(auto &x:a) cin>>x;
	for(auto &x:b) cin>>x;
	sort(a,a+n);
	sort(b,b+m);
	for(i=0;i<m;i++)
	{
		while(j<n && a[j]<=b[i]) j++;
		if(j<n){res++;j++;}
	}
	cout<<res;
}
