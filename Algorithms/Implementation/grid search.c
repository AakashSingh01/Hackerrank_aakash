#include <stdio.h>
#include <string.h>

int R,C,r,c,i,j,p,q;
void gridcheck(){
int z=0;
scanf("%d %d",&R,&C);

char a[R][C];

for(i=0;i<R;i++){scanf("%s",a[i]);}

scanf("%d %d",&r,&c);

char b[r][c];

for(i=0;i<r;i++){scanf("%s",b[i]);}

p=0;q=0;

for(p=0;p<=R-r;p++){
for(q=0;q<=C-c;q++){
z=0;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[p+i][q+j]!=b[i][j]){break;z=0;}
z++;
}
if(z==r*c)break;
}
if(z==r*c)break;
}
if(z==r*c)break;
}
if(z!=r*c)printf("NO\n");
else printf("YES\n");
}



int main() {

    int t;
    scanf("%d",&t);

    while(t--)
        {
      gridcheck();
    }
    
    return 0;
}

