#include <stdio.h>
#include <string.h>


void palind(){
int l,i,m=0,j;
char A[10000];
scanf("%s",A);
l=strlen(A);

if(l%2==1)
j=l/2;
if(l%2==0)
j=l/2-1;

for(i=l/2-1;i>=0;i--){
j++;
m+=abs((int)A[i]-(int)A[j]);
}
printf("%d",m);

}

int main() {
int t;
scanf("%d",&t);
while(t--){
palind();
printf("\n");

}
}
