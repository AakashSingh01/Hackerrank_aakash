#include  <stdio.h>

int main()
{
int i,a[100],t,n;
scanf("%d",&n);
for(i=0;i<=100;i++)a[i]=0;
for(i=0;i<n;i++)
{
scanf("%d",&t);a[t]++;
}
for(i=0;i<=100;i++){if(a[i]==1)printf("%d ",i);}
}
