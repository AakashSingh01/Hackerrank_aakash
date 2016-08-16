#include <stdio.h>
#include <string.h>
int A[26],d=0;

void gem(){
int i;
char s[100];
scanf("%s",s);
d++;
for(i=0;i<(int)strlen(s);i++)
{
if(A[(int)s[i]-97]==d-1)
A[(int)s[i]-97]=d;
}

}

int main(){
int n,c=0,j;
scanf("%d",&n);
for(j=0;j<26;j++)A[j]=0;


for(j=0;j<n;j++)
gem();

for(j=0;j<26;j++){if(A[j]==n)c++;}
printf("%d",c);
}
