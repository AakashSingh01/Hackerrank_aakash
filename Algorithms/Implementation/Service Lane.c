#include<stdio.h>

int main(){
int t,z,x,y; long int n;

scanf("%ld %d",&n,&t);
int A[n],i;
for(i=0;i<n;i++)scanf("%d",&A[i]);

for(i=0;i<t;i++){
z=3;
scanf("%d %d",&x,&y);

for(;x<=y;x++){
if(A[x]<3){z=A[x];}

if(A[x]<2){z=A[x];break;}
}
printf("%d\n",z);


}

}
