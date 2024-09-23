#include<bits/stdc++.h>
#define QHaiz main
#define int long long
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

QHaiz(){
    hacktime;
    int n,res=0;
	cin>>n;
	int a[n];
	for(auto &x:a) cin>>x;
	for(int i=0;i<n-1;i++)
	{
		int z=*max_element(a+i+1,a+n-1);   
		if(a[i]<z) res+=z-a[i];
	}
	cout<<res;
}