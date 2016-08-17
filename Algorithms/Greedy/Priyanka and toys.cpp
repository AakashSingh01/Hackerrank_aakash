#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,x;  cin>>n;   vector <int> a;     for(i=0;i<n;i++){cin>>x; a.push_back(x);}
    sort(a.begin(),a.end());
    
   for(i=0;i<a.size()-1;i++){
       if(a[i+1]-a[i]<=4){
          
           a.erase(a.begin()+i+1);i--;
   }
       }
   cout<<a.size();
    return 0;
}