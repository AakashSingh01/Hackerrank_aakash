#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void matrix(){
    int n,i,j,k=0; cin>>n; int x[n][n];
    string a;
    for(i=0;i<n;i++){cin>>a;for(j=0;j<n;j++){x[i][j]=(int)a[j];}sort(x[i],x[i]+n);}
    
    for(j=0;j<n;j++){if(k==1)break;
    for(i=0;i<n-1;i++){
        if(x[i][j]>x[i+1][j]){k=1;break;}
    }}
    if(k==0)cout<<"YES"<<endl;else cout<<"NO"<<endl;
}

int main() {
    int t;cin>>t;while(t--)matrix();
    return 0;
}