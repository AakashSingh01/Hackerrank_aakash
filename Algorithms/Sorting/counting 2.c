#include <stdio.h>


int main() {
long int n,i,j;
scanf("%ld",&n);
int a[n],b[100];

 for (i = 0; i < 100; i++) b[i]=0;

 for (i = 0; i < n; i++) 
 {scanf("%d",&a[i]); b[a[i]]++;} 

for (i = 0; i < 100; i++)
for (j = b[i]; j>0; j--)
printf("%ld ",i);

}

