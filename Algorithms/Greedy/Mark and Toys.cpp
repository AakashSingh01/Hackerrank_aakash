#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() 
{
    long long n, k,i,c=0; cin >> n >> k;
    int p[n];
    for( i = 0; i < n; i++)
         cin >> p[i];
sort(p,p+n);
for( i = 0; i < n; i++)
{if(c+p[i]>=k)break;
    c+=p[i];
}
    cout<<i;
    return 0;
}
