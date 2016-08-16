#include <stdio.h>

void arrange(long int N)
{int i;
if(N%3==0){for(i=0;i<N/3;i++)printf("555");printf("\n");}
else if(N%3==1&&N>9){for(i=0;i<(N-10)/3;i++)printf("555");printf("3333333333");printf("\n");}
else if(N%3==2&&N>4){for(i=0;i<(N-5)/3;i++)printf("555");printf("33333");printf("\n");}
else printf("-1\n");
}

int main () {
    int T,i;
long int N;
scanf("%d",&T); 
for(i=0;i<T;i++){
scanf("%ld",&N); 
arrange(N);
}}

