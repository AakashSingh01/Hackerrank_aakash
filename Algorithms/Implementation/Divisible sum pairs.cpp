
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,i,j;
    int k,c=0;
    cin >> n >> k;
    vector<int> a(n);
    for( i = 0;i < n;i++){
       cin >> a[i];
    }
    
    for( i = 0;i < n-1;i++){
        for( j = i+1;j < n;j++){
       if((a[i]+a[j])%k==0)c++;
    }}
    cout<<c;
    return 0;
}
