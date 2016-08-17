#include <bitset>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void flipping(){
    long int n;cin>>n;
    bitset<32> a=n;
    if(n==4294967295)cout<<"0"<<endl;
    else
    cout<<(a.flip()).to_ulong()<<endl;
}

int main() {
    int t; cin>>t;while(t--)flipping(); 
    return 0;
} 