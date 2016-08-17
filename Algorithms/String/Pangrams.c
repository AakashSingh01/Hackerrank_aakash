#include <stdio.h>
#include <string.h>

int main() {
int z[26];
    int t;
char a[1000];
   scanf ("%[^\n]%*c", a);

for(t=0;t<(int)strlen(a);t++)
{
if((int)a[t]>64&&(int)a[t]<91)           z[(int)a[t]-65]=1;
else if((int)a[t]>96&&(int)a[t]<123)     z[(int)a[t]-97]=1;
else if((int)a[t]==32)continue;
}

 for(t=0;t<26;t++){if(z[t]!=1) break;}
    if(t==26) printf("pangram");
else printf("not pangram");
    return 0;
}
