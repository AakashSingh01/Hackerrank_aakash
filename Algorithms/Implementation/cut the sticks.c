#include <stdio.h>

void cutrod(int n,int A[]){
int i,j,l,s=0,m;
while(1){
l=2000;m=0;

for(i=0;i<n;i++){
A[i]=A[i]-s;
if (l>=A[i]&&A[i]>0){l=A[i];}
if (A[i]>0){m++;}
}
if(m==0){break;}
s=l;printf("%d\n",m);
}

}

int main(){
int n,i;
scanf("%d",&n);
int A[n];
for(i=0;i<n;i++){
scanf("%d",&A[i]);
}
cutrod(n,A);
}
