#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
   int n,m,c=1,z[50];
int a[10][10];


void region(int x,int y)
{
    a[x][y]=c;z[c]++;
        if(a[x+1][y]==1)region(x+1,y);
        if(a[x][y+1]==1)region(x,y+1);
        if(a[x-1][y]==1)region(x-1,y);
        if(a[x][y-1]==1)region(x,y-1);
        if(a[x+1][y+1]==1)region(x+1,y+1);
        if(a[x-1][y-1]==1)region(x-1,y-1);
        if(a[x-1][y+1]==1)region(x-1,y+1);
        if(a[x+1][y-1]==1)region(x+1,y-1);
        
}


int main() {
    int p;
for(int i=0;i<50;i++)z[i]=0;
    cin>>m>>n; 
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)cin>>a[i][j];
       
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==1){c++;region(i,j);}
        }}
        
    sort(z+2,z+c+1);
    cout<<z[c];
}
