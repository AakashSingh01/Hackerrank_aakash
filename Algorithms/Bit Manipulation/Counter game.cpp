#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void rich(){
    int x;
    unsigned long long int a,i=0;   cin>>a;
    while(1){i++;
    x=(int)log2(a);
    if(a-(unsigned long long int)pow(2,x)==0)a=a/2;
    else a=a-(unsigned long long int)pow(2,x);
            if(a==1)break;
           }
    if(i%2==0)cout<<"Richard"<<endl;
    else cout<<"Louise"<<endl;
}

int main() {
    int t;cin>>t;while(t--)rich();   
    return 0;
}