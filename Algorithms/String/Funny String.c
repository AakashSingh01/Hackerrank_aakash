#include <stdio.h>
#include <string.h>

int main() {

    int t;
scanf("%d",&t);
    while(t--)
        {
        int i,n;
        char str[10000];
        scanf("%s",str);
        n=strlen(str);
        int d,e,count=0;

        for(i=0;i<n-1;i++)
            {
            d=(int)str[i]-(int)str[i+1];
            e=(int)str[n-i-1]-(int)str[n-i-2];
          
            if(abs(d)==abs(e))
                count++;
        }
        if(count==n-1)
            printf("Funny\n");
        else printf("Not Funny\n");
    }
    
    return 0;
}
