#include<stdio.h>
#include<string.h>

void ang(char a[]){
int x[26],i,z=0;
for(i=0;i<26;i++)x[i]=0;
for(i=(int)strlen(a)/2;i<(int)strlen(a);i++)x[(int)a[i]-97]++;

//for(i=0;i<26;i++)printf(" |%c = %d| ",(char)(i+97),x[i]);

for(i=0;i<(int)strlen(a)/2;i++){if(x[(int)a[i]-97]>0)x[(int)a[i]-97]--;}

//for(i=0;i<26;i++)printf(" |%c = %d| ",(char)(i+97),x[i]);

for(i=0;i<26;i++)z=z+x[i];
printf("%d\n",z);

}

void test(){
char a[10000];
scanf("%s",a);
if((int)strlen(a)%2==1)printf("-1\n");
else ang(a);
}


int main(){
int t;
scanf("%d",&t);
while (t--)
test();
}
