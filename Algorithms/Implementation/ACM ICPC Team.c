#include <stdio.h>

int n,m,i,j,c=0,d=0;

int main(){
int a,b=0;
scanf("%d %d",&n,&m);
char A[n][m];
for(i=0;i<n;i++)
{
scanf("%s",A[i]);
}

for(i=0;i<n;i++)
for(j=i;j<m;j++)
{b=0;
for(a=0;a<m;a++)
if((int)A[i][a]==49||(int)A[j][a]==49){b++;if(c<b)c=b;}
}
printf("%d",c);

for(i=0;i<n;i++)
for(j=i;j<m;j++)
{b=0;
for(a=0;a<m;a++)
{if((int)A[i][a]==49||(int)A[j][a]==49)b++;}

if(c==b)d++;
}
printf("\n%d",d);

}
