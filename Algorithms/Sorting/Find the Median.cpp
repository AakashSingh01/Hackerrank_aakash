#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n,i;cin>>n; long int a[n];
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(n%2==1)cout<<a[n/2];
    else cout<<(a[n/2]+a[n/2-1])/2;
    return 0;
}