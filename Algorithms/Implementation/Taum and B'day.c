#include<stdio.h>


void convert(){
long long int b,w,x,y,z;
scanf("%lld %lld",&b,&w);
scanf("%lld %lld %lld",&x,&y,&z);
if(z>=x&&z>=y)
{
printf("%lld\n",x*b+y*w);

}
else if(z<=x&&z>y)
{
if(z+y<x)printf("%lld\n",(z+y)*b+y*w);
else printf("%lld\n",x*b+y*w);
}
else if(z<=y&&z>x)
{
if(z+x<y)printf("%lld\n",(z+x)*w+x*b);
else printf("%lld\n",x*b+y*w);
}

else if(z<=y&&z<=x)
{
if(z+y<=x)printf("%lld\n",(z+y)*b+y*w);
else if (z+x<y)printf("%lld\n",(z+x)*w+x*b);
else printf("%lld\n",x*b+y*w);
}

}


int main()
{
int t, n;
scanf("%d",&t);
while(t--)
convert();
}
 

