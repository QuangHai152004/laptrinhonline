#include <bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
typedef pair<int,int> sk;

bool cmp(sk a,sk b) {
    return a.second<b.first;
}
QHaiz(){
	int n,res=0,x=-INT_MAX,y=-INT_MAX;
	cin>>n;
	sk A[n];
	for(auto &a:A) cin>>a.second>>a.first;
	sort(A,A+n,cmp);
	for(auto a:A)
	{
		if(x<y) swap(x,y);
		if(a.second>x) {res++;x=a.first;}
		else if(a.second>y) {res++;y=a.first;}
	}
	cout<<res;
}