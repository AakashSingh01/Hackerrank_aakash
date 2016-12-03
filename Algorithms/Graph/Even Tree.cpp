#include <cmath>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int pass [1000];
  queue<int> st;
void bfs(int s, vector <int>ver[] )
{
    int i;
    for(i=0;i<ver[s].size();i++){
      
     if(pass[ver[s][i]]!=2){
                                
         pass[ver[s][i]]=2;     
       st.push (ver[s][i]);}
    }
    
}






int main() {
    int n,m,i,x,j,y,k,ans=0;
    cin>>n>>m;
    vector<int> a[n+1];
     vector<int> z;


    for(i=0;i<m;i++){
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
      
   st.push(1);
    pass[1]=2;
   
    while(!st.empty()){
        bfs(st.front(), a);
        z.push_back(st.front());
        st.pop(); } 
        
   
   
  //  for(i=0;i<n;i++)  cout<<z[i]<<" ";
       
      for(i=n-1;i>-1;i--){
          if(a[z[i]].size()%2==1){pass[z[i]]=3;continue;}
          else{
               for(j=0;j<a[z[i]].size();j++)
              {y=a[z[i]][j];x=z[i];
                   if(pass[y]==2){
                       
                     for(k=0;k<a[x].size();k++)
                         {
                         
                         if(a[x][k]==y){ 
                             a[x].erase (a[x].begin()+k);ans++;}
                     }
                          for(k=0;k<a[y].size();k++) 
                       {
                              if(a[y][k]==x){ a[y].erase (a[y].begin()+k);ans++;}
                          }
                   }
               }
          }
                }
      
    cout<<ans/2;
    return 0;
}