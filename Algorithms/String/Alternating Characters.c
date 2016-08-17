#include <stdio.h>
#include <string.h>


void acAC(){

  
int  i,c=0;
char a[100000]; 
scanf ("%s", a);
for(i=0;i<(int)strlen(a);i++)
{
if(a[i]==a[i+1]){c++;}
}

printf("%d\n",c);
}

int main() {
    int t;
  scanf("%d",&t);
while(t--){ 

acAC();


}
}