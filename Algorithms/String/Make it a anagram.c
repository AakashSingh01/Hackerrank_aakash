#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
    int x[26],i,c=0;
    char a[10000],b[10000];
    scanf("%s %s",a,b);
    for(i=0;i<26;i++)x[i]=0;
    for(i=0;i<(int)strlen(a);i++)x[(int)a[i]-97]++;
   
    for(i=0;i<(int)strlen(b);i++)x[(int)b[i]-97]--;
    for(i=0;i<26;i++) c+=abs(x[i]);
    printf("%d",c);
}