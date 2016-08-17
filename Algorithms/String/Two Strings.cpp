#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void gem(){
    int i,j,alp[26];
    string a,b;cin>>a>>b;
    for(i=0;i<26;i++)alp[i]=0;
    for(i=0;i<a.size();i++){alp[(int)a[i]-97]=11;}
    for(i=0;i<b.size();i++){if(alp[(int)b[i]-97]==11)break;}
    if(i==b.size())cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
}

int main() {
    int t; cin>>t;while(t--)gem(); 
    return 0;
}
