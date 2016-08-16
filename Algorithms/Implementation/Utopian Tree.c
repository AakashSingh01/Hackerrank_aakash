#include <stdio.h>

int main() {
int T,N,i,j,c;

scanf("%d",&T);

for(i=0;i<T;i++)
{c=1;
scanf("%d",&N);
for(j=0;j<N;j=j+2)
{c=c*2;
if((N-j)==1){break;}
c++;
}
printf("%d",c);
}

return 0;
}

