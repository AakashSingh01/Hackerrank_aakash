#include <stdio.h>
#include <string.h>


void gridcheck(){
int r,i,j;
scanf("%d",&r);

char a[r][r];

for(i=0;i<r;i++)
scanf("%s",a[i]);

for(i=1;i<r-1;i++){
for(j=1;j<r-1;j++)
{if(a[i][j]>a[i+1][j]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i][j-1])a[i][j]='X';}
}
for(i=0;i<r;i++){for(j=0;j<r;j++){printf("%c",a[i][j]);}printf("\n");}
}



int main() {

    int t;
 
      gridcheck();
   
    return 0;
}

