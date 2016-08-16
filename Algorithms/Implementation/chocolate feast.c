#include <stdio.h>


int main() {

    int t; long int n, c, m,a,b;
    scanf("%d", &t);
    while ( t>0 )
    {t--;
        scanf("%ld %ld %ld",&n,&c,&m);
        a=n/c;b=a;
     while ( 1 ){if(b<m)break;a+=b/m;b=b/m+(b%m);}
        
        printf("%ld\n",a);
    }
    return 0;
}

