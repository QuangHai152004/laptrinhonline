#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;
string A,B;
int n;

void TRY(string x){
	if(x.size()==n){
		cout<<x<<endl;
		return;
	}
	TRY(x+A[x.size()]);
	if(A[x.size()] != B[x.size()]) TRY(x+B[x.size()]);
	
}
QHaiz(){
    hacktime;
	cin>>A>>B;
	n=A.size();
	for(int i=0 ; i<n ; i++)
		if(A[i]>B[i])
			swap(A[i],B[i]);
	TRY("");
	return 0;
}
