#include  <stdio.h>
int a[1000]={0,0,0,0,4,6,6,7,1,8,0,0,2,0,9,2,3,4,2},n=19;
void fact();

int main()
{int a,i;
long long int z=1;
scanf("%d",&a);
if(a>=21)
fact(a);
else{
for(i=2;i<=a;i++){
z=z*i;
}
printf("%lld",z);
}
}


void fact(int x){

int b[1000],c,i,j;
for(i=21;i<=x;i++){
c=0;

for(j=0;j<n;j++)
{
b[j]=(a[j]*i+c)%10;
c=(a[j]*i+c)/10;

}
if(c>99){b[n]=c%10;b[++n]=(c%100)/10;b[++n]=(c%1000)/100;n++;}
else if(c>9){b[n]=c%10;b[++n]=(c%100)/10;n++;}
else if(c<=9&&c!=0){b[n]=c;n++;}
for(j=n-1;j>=0;j--)a[j]=b[j];
}

for(j=n-1;j>=0;j--)printf("%d",b[j]);

}
