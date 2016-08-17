#include <stdio.h>
int main() {
int n,i,s,t,a;
scanf("%d",&s);scanf("%d",&n);
 for (i = 0; i < n; i++) 
     {scanf("%d",&t);if(t==s)a=i;} 
printf("%d",a);
}