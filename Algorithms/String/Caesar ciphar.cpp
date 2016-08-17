#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
 int n,i,t,m; string s; cin>>n>>s>>m; m=m%26;
    
   for( i=0;i<n;i++){
      t= (int)s[i];
       if(t>64&&t<91){
           t=t+m; if(t>90)t=t-26;
           cout<<(char)t;
       }
       else if(t>96&&t<123){
           t=t+m; if(t>122)t=t-26;
           cout<<(char)t;
       }
       else cout<<(char)t;
   }
}
