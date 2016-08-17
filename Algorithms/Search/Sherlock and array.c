#include <stdio.h>

void work(){
long int n,i,j,x=0,y=0;
     scanf("%ld",&n);
        int A[n];
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    i=0;j=n-1;
    while(1){
      
        if(x<=y&&i<j)  { x+=A[i];i++;}
        if(y<=x&&j>i) { y+=A[j]; j--;}
        if(j==i&&x==y){printf("YES\n");break;}
        if(j==i&&x!=y){printf("NO\n");break;}
    }
}

int main() {
 int t;
    scanf("%d",&t);
    for(;t>0;t--){
work();        
    }
}