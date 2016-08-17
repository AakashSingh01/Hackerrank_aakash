#include <stdio.h>


int main() {
long int n,i;
int t;char c[20];

scanf("%ld",&n);
int a[100];

 for (i = 0; i < 100; i++)a[i]=0;

 for (i = 0; i < n; i++) 
     { scanf("%d", &t);scanf("%s",c);a[t]++;}

 for (i = 1; i < 100; i++) 
     {a[i]=a[i-1]+a[i];} 

 for (i = 0; i < 100; i++)printf("%d ",a[i]);
}