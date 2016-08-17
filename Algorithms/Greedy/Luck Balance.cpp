#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int n,k,i,l,t,c=0; 
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {   cin>>l>>t;
     if(t==0){c+=l;a[i]=-1;}
     else a[i]=l;                    }
    sort(a, a + n);

   for(i=0;i<n;i++){
       if(a[i]==-1)continue;
       if(i>=n-k)c+=a[i];
       else c-=a[i];
     
   }
     cout<<c;
    return 0;
}