#include <stdio.h>
#include <string.h>

void lex(){
int x=0,y=0,i,a,b;
char A[100000],B[100000];
scanf("%s",A);
scanf("%s",B);
a=(int)strlen(A);b=(int)strlen(B);
for(i=0;i<a+b;i++)
{
/*
if    (   (int)A[x]==(int)B[y]  &&x<y )
{printf("%c",A[x]);x++;continue;}

if    (   (int)A[x]==(int)B[y]  &&y<x  )
{printf("%c",A[x]);x++;continue;}

*/

if(     (  (int)A[x]>=(int)B[y]  &&x<a   &&y<b   )   ||   x==a)
{printf("%c",B[y]);y++;continue;}

if(     (   (int)A[x]<=(int)B[y]  &&x<a  &&y<b  ) ||   y==b)
{printf("%c",A[x]);x++;continue;}

}


}

int main(){
int t,k;
scanf("%d",&t);
for(k=0;k<t;k++){
lex();printf("\n");
}
}


