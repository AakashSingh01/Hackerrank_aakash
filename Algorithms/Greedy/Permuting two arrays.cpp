#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void twoarry(){
   long int n,k,i;cin>>n>>k;long int A[n],B[n];
    for(i=0;i<n;i++)cin>>A[i]; 
    for(i=0;i<n;i++)cin>>B[i];
    sort(A,A+n);sort(B,B+n);
    
    for(i=0;i<n;i++){
       
        if(A[i]+B[n-1-i]<k)break;
    }

    if(i!=n)cout<<"NO";else cout<<"YES"; cout<<endl;
}
int main() {  
    int t;cin>>t;while(t--)twoarry();
    return 0;
}