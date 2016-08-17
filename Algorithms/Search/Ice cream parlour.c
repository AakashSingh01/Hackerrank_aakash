#include <stdio.h>
#include <string.h>
#include <math.h>

void sum(){
    long int m,n,i,j;
    scanf("%ld %ld",&m,&n);
   long int c[n];
    for(i=0;i<n;i++)scanf("%ld",&c[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){if(i==j)continue;
           if(c[i]+c[j]==m)break;}
        if(c[i]+c[j]==m)break;
    }
    if(i<j) printf("%ld %ld",i+1,j+1);
    if(i>j) printf("%ld %ld",j+1,i+1);
    printf("\n");
}

int main() {

   int t ;
    scanf("%d",&t);
    while(t--)sum();
}