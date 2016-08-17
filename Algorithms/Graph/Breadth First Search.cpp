#include <cmath>
#include <cstdio>
#include <vector>
#include <list>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;


vector <int> pass(1000,0);
queue <int> st;

void bfs(int s, vector <int>ver[])
{
    int i;
    for(i=0;i<ver[s].size();i++){
      
     if(pass[ver[s][i]]<1){
                                
         pass[ver[s][i]]=pass[s]+1;     
       st.push (ver[s][i]);}
    }
    
}


void graph(){
    int n,x,y,s; long int i, m;
    cin>>n>>m;
  
    vector <int> ver[n+1];  for(i=1;i<=n;i++)pass[i]=0;
   
    for(i=0;i<m;i++){
        
        cin>>x>>y; ver[x].push_back(y);ver[y].push_back(x);
    
    }
    cin>>s; 
    st.push(s);
    pass[s]=1;
    
    while(!st.empty()){
        bfs(st.front(), ver);
        st.pop();
    } 
   
    for(i=1;i<=n;i++){
        if(pass[i]==1)continue;
        if(pass[i]==0){cout<<"-1 ";continue;}
        cout<<(pass[i]*6-6)<<" ";
    }

    cout<<endl;
}



int main() 
{
int t;
cin>>t;
while(t--)graph();
return 0;
}
