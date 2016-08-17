#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
  int n,i,x;    cin>>n; vector <int>  r;
    for(i=0; i<n; i++) {cin>>x;r.push_back(x);}
    x=r[0];r.erase(r.begin());
        for(i=0; i<n-1; i++){if(r[i]<x)cout<<r[i]<<" ";}cout<<x<<" ";
        for(i=0; i<n-1; i++){if(r[i]>x)cout<<r[i]<<" ";}
   return 0;
}