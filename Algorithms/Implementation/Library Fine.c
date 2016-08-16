#include <stdio.h>

int main(){
int d,m,y,D,M,Y;
scanf("%d %d %d",&d,&m,&y);
scanf("%d %d %d",&D,&M,&Y);

if(y==Y&&m==M&&d>D)
printf("%d",15*(d-D));
else if(y==Y&&m>M)
printf("%d",500*(m-M));
else if(y>Y)
printf("%d",10000);
    else printf("0");
}

