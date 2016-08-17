#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int t,n;cin>>t;
    int a[41]={0,0,0,0,1,2,2,3,4,4,6,  8,9,11,15,19,24,32,42,53,68,
            91,119,155,204,269,354,462,615,816,1077,  1432,1912,0,3385,4522,6048,8078,10794,14475,19385
               };
    while(t--){
      cin>>n;cout<<a[n]<<endl;  
    }
    return 0;
}

