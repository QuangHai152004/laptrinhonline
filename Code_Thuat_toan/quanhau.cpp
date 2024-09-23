#include<bits/stdc++.h>
#define QHaiz main
#define hacktime ios_base::sync_with_stdio(false);	cin.tie(NULL);cout.tie(NULL)
using namespace std;

map<int,bool> C,A,P;
int d=0;

void TRY(int *x,int k,int n){
	if(k-1==n){
		d++;
		return;
	}
	
	for(int t=1 ; t<=n ; t++){
		if(A[t]==0 and C[k-t]==0 and P[k+t]==0){
			x[k]=t;
			A[t]=C[k-t]=P[k+t]=1;
			TRY(x,k+1,n);
			A[t]=C[k-t]=P[k+t]=0;
		}
	}
}
QHaiz(){
	int n,x[100];
	cin>>n;
	TRY(x,1,n);
	cout<<d;
	return 0;
}