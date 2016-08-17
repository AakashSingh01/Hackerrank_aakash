#include <cmath>
#include <cstdio>
#include <vector>
#include <list>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
int n,x,y,z,s;long int m;
vector <int> pass(1000);
vector <int> qq;

void prims(vector <int> gr[],vector <int> wt[])
{x=99999;int i,j;
 for(j=0;j<qq.size();j++){
     
    for(i=0;i<gr[qq[j]].size();i++)
    {
       
     if(x>wt[qq[j]][i]&&pass[gr[qq[j]][i]]==-1)
     {y=gr[qq[j]][i];
      x=wt[qq[j]][i];
    
     }
      
    }
 }
 if(x!=99999){
 pass[y]=x;qq.push_back(y); }
 
}



int main() 
{
int i,f,sum=0;
cin>>n>>m;
    vector <int> gr[n+1];vector <int> wt[n+1];
    for(i=0;i<=n;i++)pass[i]=-1;
for(i=0;i<m;i++)
{
    cin>>x>>y>>z;   
    gr[x].push_back(y); gr[y].push_back(x);
    wt[x].push_back(z); wt[y].push_back(z);
}
    cin>>s;
    qq.push_back(s);
    pass[s]=0;
    f=n;
    while(f--)
    prims(gr,wt);
  for(i=1;i<=n;i++)sum+=pass[i];
    cout<<sum;
return 0;
}
