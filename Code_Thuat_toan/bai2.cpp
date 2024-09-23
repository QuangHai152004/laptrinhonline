#include<bits/stdc++.h>
#define Qhaiz main
using namespace std;
int UCLN(int x, int y){
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

Qhaiz() {
    int n;cin>>n;
    int res = 1;
    for(int i=2;i<=n;i++){
        res = UCLN(res,i);
    }
    cout<<res;

}