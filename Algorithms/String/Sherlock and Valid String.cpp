#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {int i,x=0,y=0;
    string s;cin>>s;vector<int> a;a.assign (26,0);
    for(i=0;i<s.size();i++)
        a[(int)s[i]-97]++; 
            for(i=0;i<25;i++){if(a[i]>0){
                if(x==0)x=a[i];
                if(x>0&&x!=a[i])y++;
                if(y>1)break;
            }}
           if(y>1)cout<<"NO";else cout<<"YES";
    return 0;
}
