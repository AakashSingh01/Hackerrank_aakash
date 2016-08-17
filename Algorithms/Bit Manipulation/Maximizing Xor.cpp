#include <cmath>
#include <ctime>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int xorr(int a,int b){
 int flags[] = {a,b};
  int acc = accumulate (flags, end(flags), 0, bit_xor<int>());
  return acc ;   
}

int main() {
    
int x,y,i,j,z,c=0; cin>>x>>y;
    for(i=0;i<y-x+1;i++)
         for(j=0;j<y-x+1;j++){
        z=xorr(x+i,x+j);
        if(c<z)c=z;
    }
        cout<<c;
    return 0;
}
