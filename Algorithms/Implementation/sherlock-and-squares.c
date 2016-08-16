#include  <stdio.h>
#include  <math.h>

void square(){
long long int a ,b;
    long A,B;
    int z;
scanf("%lld %lld",&a,&b);
    A=(int)sqrt(a);
    B=(int)sqrt(b);
    z=B-A;
   // if(B*B==b)z++;
    if(A*A==a)z++;
printf("%d\n",z);
}

int main()
{
int t;
scanf("%d",&t);
while(t--)square();
}
