#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j; cin>>n; long int a[n],x,y;    for(i=0;i<n;i++){cin>>x>>y;a[i]=x+y;}
    
   for(i=0;i<n;i++)
   {x=99999999;
    for(j=0;j<n;j++){
       if(x>a[j]){x=a[j];y=j;}
   
    }
    a[y]=999999999;
    cout<<y+1<<" ";
   }
    return 0;
}