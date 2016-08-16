#include <stdio.h>

int main() {
int T,i,c;
 long int N,n;

scanf("%d",&T);

for(i=0;i<T;i++){
c=0;
scanf("%ld",&N);
n=N;
while(n>0){
if(n%10!=0){
if(N%(n%10)==0)c++;}
n=n/10;
}
printf("%d\n",c);
}

return 0;
}

