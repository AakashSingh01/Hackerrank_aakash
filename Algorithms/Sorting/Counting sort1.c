#include <stdio.h>

int main() {
long int n,i;
int t;
scanf("%ld",&n);
int a[100];

  for (i = 0; i < 100; i++)a[i]=0;

 for (i = 0; i < n; i++) 
     { scanf("%d", &t);a[t]++;}
 
 for (i = 0; i < 100; i++)printf("%d ",a[i]);
}